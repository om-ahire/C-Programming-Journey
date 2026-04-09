// call by value :
#include <stdio.h>
int add(int a)
{
    printf("\n before update value of a is = %d", a);
    a = a + 2;
    printf("\n after updatain value of a is = %d", a);
}
int main()
{
    int a = 10;
    printf("Before function calling value of a is = %d", a);
    add(a);
    printf("After function callinf value of a is = %d ", a);
}