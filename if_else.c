#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the Number : ");
    scanf("%d", &num1);
    /*  if (num1 > 0)
    {
        printf("The Number is Positive :) ");
    }
    else if (num1 == 0)
    {
        printf("The Number is Zero :|");
    }
    else
    {
        printf("The Number is Negative :(");
    } */
    (num1 > 0)    ? printf("The Number is Positive :) ")
    : (num1 == 0) ? printf("The Number is Zero :|")
                  : printf("The Number is Negative :(");
}
