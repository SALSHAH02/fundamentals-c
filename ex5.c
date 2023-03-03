#include <stdio.h>

int main()
{
    int i;
    char string[] = "VATSAL SHAH 2799";
    printf("Actual string : %s\n", string);
    
    for(i = 0; string[i]; i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i]  += 32;
        }
    }
    printf("Lowercase string : %s\n", string);

    return 0;
}