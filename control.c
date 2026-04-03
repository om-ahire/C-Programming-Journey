// if else :

#include <stdio.h>
int main()
{

    int num1;
    printf("Enter the Number 1  : ");
    scanf("%d", &num1);
    int num2;
    printf("Enter the Number 2 : ");
    scanf("%d", &num2);

    (num1 > num2) ? printf(" %d First number is greater", num1) : printf("%d is greater", num2);

    return 0;
}
