#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file1, *file2;
    char ch1, ch2;
    char filename1[100], filename2[100];

    printf("Enter the name of first file: ");
    scanf("%s", filename1);
    printf("Enter the name of second file: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");

    if (file1 == '\0' || file2 == '\0') 
    {
        printf("Error: unable to open file(s)\n");
        exit(EXIT_FAILURE);
    }

    do {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);
        if (ch1 != ch2) {
            printf("Files are not equal\n");
            exit(EXIT_SUCCESS);
        }
    } while (ch1 != EOF && ch2 != EOF);
    
    if (ch1 == EOF && ch2 == EOF)
    {
        printf("Files are equal\n");
    } else 
    {
        printf("Files are not equal\n");
    }
    
    fclose(file1);
    fclose(file2);

    return 0;
}