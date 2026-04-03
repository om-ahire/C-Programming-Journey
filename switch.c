#include <stdio.h>
int main()
{
    int n;
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    printf("Enter Your Choice what u want to check \n 1 for Even odd \n 2 for Positive Negative = ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        if (num % 2 == 0)
        {
            printf("Given Number is Even");
        }
        else
        {
            printf("Given Number is Odd ");
        }
        break;

    case 2:
        if (num > 0)
        {
            printf("Number is positive ");
        }
        else if (num == 0)
        {
            printf("Number is 0");
        }
        else
        {
            printf("Number is Negative ");
        }
        break;
    default:
        printf("Enter the Valid choice ");
    }
}