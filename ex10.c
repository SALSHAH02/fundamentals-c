#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char *a[5] = {"one", "two", "three", "four", "five"};
   int i;
   printf ( "the strings are at locations: ");
   for (i=0; i<5; i++)
   {
      printf ("%d\n", a[i]);
   }
   return 0;
}