#include <stdio.h>
#include <string.h>

int main() {
    char str1[200];
    char str2[300];
    fgets(str1, sizeof(str1),stdin);
    //fgets(str2, sizeof(str2),stdin);
    
    // Copy string str1 to str2 using strcpy
    strcpy(str2, str1);
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    // Compare the two strings using strcmp
    if (strcmp(str1, str2) == 0)
    {
        printf("str1 and str2 are equal\n");
    } else
    {
        printf("str1 and str2 are not equal\n");
    }
    
    return 0;
}
