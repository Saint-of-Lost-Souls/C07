#include <stdlib.h>
#include <stdio.h>

/* Create a function ft_range which returns an array of ints. This int array should
contain all values between min and max.
• Min included - max excluded. */

int *ft_range(int min, int max)
{
    if (min < max)
    {
        
    }
}

int main()
{
    int min;
    int max;

    min = 1;
    max = 9;

    int array[] = ft_range(min, max);

    printf("The array of ints: %d", array);

    return (0);
}