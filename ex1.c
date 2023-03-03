#include <stdio.h>

int main()
{
    int i, space = 0, tab = 0, newline = 0 ;
    char input[200];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    for(i=0; input[i] != '\0'; i++)
    {
        if(input[i] == ' ')
        {
            space++;
        }
        else if(input[i] == '\t')
        {
            tab++;
        }
       else if(input[i] == '\n')
        {
            newline++;
        }
    }
    
    printf("Total number of space : %d\n",space);
    printf("Total number of tab : %d\n",tab);
    printf("Total number of newline : %d\n",newline);

    return 0;
}