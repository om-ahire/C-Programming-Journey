#include <stdio.h>
int main()
{
    int my_array[3][2] = {
        {3, 2},
        {22, 90},
        {34, 98}};
    int r;
    int c;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("%d ", my_array[r][c]);
        }
        printf("\n");
    }
}