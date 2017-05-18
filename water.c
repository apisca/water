#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;
    
    do
    {
        printf("How long do you take on shawer, in minutes?");
        n = get_int();
        
        if (n < 0)
        {
            printf("Value %i is not valid\n", n);
        }
        
        else
        {
            printf("A shower %i minutes longs uses %i litters of water\n" , n, n*12);
        }
    }
    
    while (n < 0);

}
