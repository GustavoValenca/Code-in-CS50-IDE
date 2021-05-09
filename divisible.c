#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    
    do
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    
    printf("Dividers: ");
    
    for (int i = 1; i <= n; i ++)
    {
        int r = n % i;
        if ( r == 0)
        {
            printf("%i, ", i);
        }
    }
    printf("\n");
}
