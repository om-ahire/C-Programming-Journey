// Function with Return type :
#include <stdio.h>
int add(int a, int b)
{
    int c; // this is local variable thats why we cannot access out of this block.
    c = a + b;
    return c; // We used return type to accessing local variable out of the block .
}
int main()
{
    printf("Addition is %d", add(13, 45));
}