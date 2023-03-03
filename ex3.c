#include <stdio.h>

int main()
{
   int a;
   printf("Enter a string as input : ");
   a = getchar();
   while(a != EOF)
   {
       putchar(a);
       a = getchar();
   }
    return 0;
}