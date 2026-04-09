#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Different pattern :
    for (int a = 1; a <= 4; a++)
    {
        for (int b = 1; b <= 4; b++)
        {
            if (b % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("@");
            }
        }
        printf("\n");
    }
}