#include <stdio.h>
int main()
{ /*
     for (int i = 1; i <= 10


         ; i++)
     {
         printf("%d", i);
         if (i < 10)
             printf("-");
     } */

    // int num1 = 0, num2 = 1, num3 = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d", num1);
    //     num3 = num1 + num2;
    //     num1 = num2;
    //     num2 = num3;
    // }
    int number = 1234;
    int reverse_Num = 0;
    while (number > 0)
    {
        int last_Digit = number % 10;
        reverse_Num = reverse_Num * 10 + last_Digit;
        number = number / 10;
    }
    printf("Reverse Number is %d ", reverse_Num);
}