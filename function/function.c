#include <stdio.h>
//  parameterized function

int cube(int a)
{
    int result = a * a * a;
    printf("Cube of %d is  %d", a, result);
}

//  default Function :
int square()
{
    int a = 10;
    int result2 = a * a;
    printf("Square of %d is %d", a, result2);
}
int main()
{
    int number;
    // local variable
    printf("Enter the Positive Number : ");
    scanf("%d", &number);
    cube(number);
    square();
}