/*
 * Question 04: Library Shelf Management System
 *
 * Description:
 * Develop a library shelf system using structures and pointers.
 * The program should:
 * - Add and access books.
 * - Update book popularity.
 * - Remove the least recently accessed book when the shelf is full.
 * - Manage all operations through a menu-driven interface.
 */

#include <stdio.h>
#include <string.h>

#define MAX_CAPACITY 100

typedef struct {
    int id;
    int popularity;
    int lastAccessTime;
} Book;

int findBook(Book shelf[], int numBooks, int bookID) {
    for (int i = 0; i < numBooks; i++)
        if (shelf[i].id == bookID)
            return i;
    return -1;
}

int findLeastRecentlyAccessed(Book shelf[], int numBooks) {
    int index = 0;
    for (int i = 1; i < numBooks; i++)
        if (shelf[i].lastAccessTime < shelf[index].lastAccessTime)
            index = i;
    return index;
}

int main() {
    int shelfCapacity, numOperations;

    printf("Enter the maximum number of books the shelf can hold: ");
    scanf("%d", &shelfCapacity);
    
    printf("Enter the number of operations to perform: ");
    scanf("%d", &numOperations);

    Book shelf[MAX_CAPACITY];
    int currentBooks = 0;
    int timeStamp = 1;

    for (int i = 0; i < numOperations; i++) {
        char command[10];
        printf("\nEnter command (ADD x y or ACCESS x): ");
        scanf("%s", command);

        if (strcmp(command, "ADD") == 0) {
            int bookID, popularity;
            printf("Enter book ID and popularity: ");
            scanf("%d %d", &bookID, &popularity);

            int index = findBook(shelf, currentBooks, bookID);

            if (index != -1) {
                shelf[index].popularity = popularity;
                shelf[index].lastAccessTime = timeStamp++;
                printf("Book updated: ID=%d, Popularity=%d\n", bookID, popularity);
            } else {
                if (currentBooks == shelfCapacity) {
                    int removeIndex = findLeastRecentlyAccessed(shelf, currentBooks);
                    printf("Shelf full! Removing least recently accessed book ID=%d\n", shelf[removeIndex].id);
                    for (int j = removeIndex; j < currentBooks - 1; j++)
                        shelf[j] = shelf[j + 1];
                    currentBooks--;
                }
                shelf[currentBooks].id = bookID;
                shelf[currentBooks].popularity = popularity;
                shelf[currentBooks].lastAccessTime = timeStamp++;
                currentBooks++;
                printf("Book added: ID=%d, Popularity=%d\n", bookID, popularity);
            }

        } else if (strcmp(command, "ACCESS") == 0) {
            int bookID;
            printf("Enter book ID to access: ");
            scanf("%d", &bookID);

            int index = findBook(shelf, currentBooks, bookID);

            if (index == -1)
                printf("-1 (Book not found)\n");
            else {
                printf("Popularity of book ID %d: %d\n", bookID, shelf[index].popularity);
                shelf[index].lastAccessTime = timeStamp++;
            }
        } else {
            printf("Invalid command! Use ADD or ACCESS.\n");
        }
    }

    return 0;
}
