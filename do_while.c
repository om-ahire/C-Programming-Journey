#include <stdio.h>
int main()
{
    int choice = 0;
    do
    {
        printf("Hello ");
        printf("Welcome\n ");
        printf("Are u happy ?");
        printf("Enter 0 if u not \n Enter 1 if u are : ");
        scanf("%d", 0 & choice);

    } while (choice == 1);
    if (choice == 1)
    {
        printf("then Die :)  ");
    }
}