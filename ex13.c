#include<stdio.h>

int main()
{
    int b;
    b = getchar();
    while (b != EOF) 
    {
        if (b == ' ') 
        {
            putchar('\n');
        }
        else 
        {
            putchar(b);
        }
        b = getchar();
    }
}