#include <stdio.h>
#include <string.h>

void delete_char(char *s1, const char *s2)
{
    int i, j, k;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (i = 0; i < len2; i++) 
    {
        for (j = k = 0; j < len1; j++) 
        {
            if (s1[j] != s2[i]) 
            {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
        len1 = k;   // we can aslo comment this line as it is not necessay for all the time.
    }
}

int main()
{
    char s1[100], s2[100];
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);

    delete_char(s1, s2);
    printf("After deleting characters in string 1 that are also in string 2: %s\n", s1);

    return 0;
}