#include <stdio.h>
//  Addition Function :
int add(int a, int b)
{
    int result1 = a + a;
    printf("Addition is = %d \n ", result1);
}
//  Subtraction Function :
int sub(int a, int b)
{
    int result2 = a - b;
    printf("Subtraction is =%d \n ", result2);
}

// Multiplication Function :
int mul(int a, int b)
{

    int result3 = a * b;
    printf("Multiplication is = %d \n", result3);
}

// Division Function:
int div(int a, int b)
{

    int result4 = a / b;
    printf("Division is = %d \n ", result4);
}
int main()
{
    int num1;
    int num2;
    printf("Enter the First Number : ");
    scanf("%d", &num1);
    printf("Enter the Second Number : ");
    scanf("%d", &num2);
    add(num1, num2);
    sub(num1, num2);
    mul(num1, num2);
    div(num1, num2);
}