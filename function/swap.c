#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf(" a = %d, b = %d\n", *a, *b);
}
int main()
{
    int a = 12;
    int b = 10;
    printf(" a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}
