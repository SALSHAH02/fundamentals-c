#include <stdio.h>

int main() 
{
    int length = 0;
    char c;

    printf("Enter a string for input : ");

    while ((c = getchar()) != '\n') 
    {
        length++;
    }

    printf("The length of the input line is: %d\n", length);

    return 0;
}