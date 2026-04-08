#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("*  \n");
    }

    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }
}
