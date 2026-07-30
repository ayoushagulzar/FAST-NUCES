// Create a program that opens a file named log.txt and appends a new line with the current 
// timestamp each time the program runs. Use this file to track each time the program was executed. 

#include <stdio.h>
#include <time.h>

int main()
{
    FILE *fp = fopen("D:\\log.txt", "a"); // Open file in append mode
    if (fp == NULL)
    {
        printf("Could not open log.txt\n");
        return 1;
    }
    time_t now = time(NULL);        // Get current time
    struct tm *t = localtime(&now); // Convert to readable format , struct tm is built in structure

    // Write timestamp into the file
    fprintf(fp, "Program ran at: %02d-%02d-%04d %02d:%02d:%02d\n",
            t->tm_mday,
            t->tm_mon + 1,
            t->tm_year + 1900,
            t->tm_hour,
            t->tm_min,
            t->tm_sec);

    fclose(fp);

    printf("Timestamp added to log.txt\n");
    return 0;
}
