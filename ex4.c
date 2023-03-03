#include <stdio.h>

int main()
{
    int fah, celsius;
    int minimum = 0, maximum = 900, difference = 20;
    printf("Fahrenheit\tCelsius\n");
    
    for(fah = minimum; fah <= maximum; fah += difference)
    {
        celsius = (5.0 / 9.0)*(fah-32.0);
        printf("%d\t%d\n", fah, celsius);
    }
    
    return 0;
}
