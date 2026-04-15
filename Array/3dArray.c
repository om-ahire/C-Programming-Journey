#include <stdio.h>
int main()
{

    int myarr[2][3][2] =
        {
            {// first layer
             {1, 3},
             {3, 4}},

            {// Second layer :
             {5, 6},
             {7, 8}}

        };
    int d, r, c;

    for (d = 0; d < 2; d++)
    {
        for (r = 0; r < 2; r++)
        {
            for (c = 0; c < 2; c++)
            {
                printf("%d", myarr[d][r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }
}