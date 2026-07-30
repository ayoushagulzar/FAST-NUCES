/*
 * Question 05: Line-Based Text Editor
 *
 * Description:
 * Develop a text editor using dynamic memory allocation.
 * The program should:
 * - Store lines using dynamically allocated memory.
 * - Insert and delete lines.
 * - Resize memory using realloc.
 * - Save and load text from files.
 * - Manage memory efficiently using pointers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY 5
#define MAX_LINE_LENGTH 500

typedef struct {
    char **lines;
    int numLines;
    int capacity;
} TextBuffer;


void ensureCapacity(TextBuffer *buffer) {
    if (buffer->numLines >= buffer->capacity) {
        int newCapacity = buffer->capacity * 2;
        char **temp = realloc(buffer->lines, newCapacity * sizeof(char*));
        if (!temp) {
            perror("Failed to allocate memory");
            exit(EXIT_FAILURE);
        }
        buffer->lines = temp;
        buffer->capacity = newCapacity;
    }
}

void insertLine(TextBuffer *buffer, int index, const char *text) {
    if (index < 0 || index > buffer->numLines) {
        printf("Invalid index.\n");
        return;
    }

    ensureCapacity(buffer);

   
    memmove(&buffer->lines[index + 1], &buffer->lines[index],
            (buffer->numLines - index) * sizeof(char*));

    buffer->lines[index] = malloc(strlen(text) + 1);
    if (!buffer->lines[index]) {
        perror("Failed to allocate memory for line");
        exit(EXIT_FAILURE);
    }
    strcpy(buffer->lines[index], text);
    buffer->numLines++;
}


void deleteLine(TextBuffer *buffer, int index) {
    if (index < 0 || index >= buffer->numLines) {
        printf("Invalid index.\n");
        return;
    }
    free(buffer->lines[index]);
    memmove(&buffer->lines[index], &buffer->lines[index + 1],
            (buffer->numLines - index - 1) * sizeof(char*));
    buffer->numLines--;
}

void printAllLines(TextBuffer buffer) {
    for (int i = 0; i < buffer.numLines; i++) {
        printf("%d: %s\n", i, buffer.lines[i]);
    }
}


void shrinkToFit(TextBuffer *buffer) {
    if (buffer->numLines == 0) {
        free(buffer->lines);
        buffer->lines = NULL;
        buffer->capacity = 0;
        return;
    }
    char **temp = realloc(buffer->lines, buffer->numLines * sizeof(char*));
    if (!temp) {
        perror("Failed to shrink array");
        exit(EXIT_FAILURE);
    }
    buffer->lines = temp;
    buffer->capacity = buffer->numLines;
}

// Free all memory
void freeAll(TextBuffer *buffer) {
    for (int i = 0; i < buffer->numLines; i++) {
        free(buffer->lines[i]);
    }
    free(buffer->lines);
    buffer->lines = NULL;
    buffer->numLines = 0;
    buffer->capacity = 0;
}

// Save buffer to a file
void saveToFile(TextBuffer buffer, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        perror("Failed to open file");
        return;
    }
    for (int i = 0; i < buffer.numLines; i++) {
        fprintf(fp, "%s\n", buffer.lines[i]);
    }
    fclose(fp);
    printf("Saved %d lines to '%s'\n", buffer.numLines, filename);
}

// Load buffer from a file
void loadFromFile(TextBuffer *buffer, const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Failed to open file");
        return;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, fp)) {
        line[strcspn(line, "\n")] = '\0'; 
        insertLine(buffer, buffer->numLines, line);
    }
    fclose(fp);
    printf("Loaded %d lines from '%s'\n", buffer->numLines, filename);
}

int main() {
    TextBuffer buffer;
    buffer.lines = malloc(INITIAL_CAPACITY * sizeof(char*));
    if (!buffer.lines) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    buffer.numLines = 0;
    buffer.capacity = INITIAL_CAPACITY;

    char command[20];
    char text[MAX_LINE_LENGTH];
    int index;

    while (1) {
        printf("\nCommands: insert, delete, print, shrink, save, load, exit\n");
        printf("Enter command: ");
        scanf("%s", command);

        if (strcmp(command, "insert") == 0) {
            printf("Enter index to insert: ");
            scanf("%d", &index);
            getchar(); 
            printf("Enter text: ");
            fgets(text, MAX_LINE_LENGTH, stdin);
            text[strcspn(text, "\n")] = '\0';
            insertLine(&buffer, index, text);
        }
        else if (strcmp(command, "delete") == 0) {
            printf("Enter index to delete: ");
            scanf("%d", &index);
            deleteLine(&buffer, index);
        }
        else if (strcmp(command, "print") == 0) {
            printAllLines(buffer);
        }
        else if (strcmp(command, "shrink") == 0) {
            shrinkToFit(&buffer);
            printf("Shrunk array to fit %d lines.\n", buffer.numLines);
        }
        else if (strcmp(command, "save") == 0) {
            char filename[100];
            printf("Enter filename to save: ");
            scanf("%s", filename);
            saveToFile(buffer, filename);
        }
        else if (strcmp(command, "load") == 0) {
            char filename[100];
            printf("Enter filename to load: ");
            scanf("%s", filename);
            loadFromFile(&buffer, filename);
        }
        else if (strcmp(command, "exit") == 0) {
            break;
        }
        else {
            printf("Unknown command!\n");
        }
    }

    freeAll(&buffer);
    return 0;
}
