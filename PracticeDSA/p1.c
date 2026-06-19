#include <stdio.h>
int main()
{
    int x, large;

    int n;
    printf("Enter the Number of element in array: ");
    scanf("%d", &n);

    int num[n];

    for (int j = 0; j < n; j++)
    {
        printf("Enter the elements of Array of index %d : ", j);
        scanf("%d", &num[j]);
    }
    large = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > large)
        {
            large = num[i];
        }
    }
    printf("Largest Number is : %d", large);
}