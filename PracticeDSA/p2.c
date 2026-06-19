#include <stdio.h>
int main()

{
    int n;
    printf("Enter the Number of Elements in Array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Element at index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Normal Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf(" \n Reverse Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}