#include <stdio.h>

int main()
{
    int i, j =0;
    char input[1000], output[1000];
    printf("Enter the input string : ");
    fgets(input, sizeof(input), stdin);
    
    for(i = 0; i < 1000; i++)
    {
        if(input[i] != ' ' && input[i] != '\t')
        {
            output[j] = input[i];
            j++;
        }
    }
    output[j] = '\0';
    printf("Output string is : %s\n", output);
    return 0;
}