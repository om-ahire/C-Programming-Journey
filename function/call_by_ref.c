#include <stdio.h>
int add(int *a)
{
    printf("\n Before Updation A is = %d ", *a);
    *a = *a + 10;
    printf("\n After Updation is A = &d", *a);
}
int main()
{
    int a = 10;
    printf("Before Function calling A is = %d", a);
    add(&a);
    printf("After Function calling A is = &d", a);
}
