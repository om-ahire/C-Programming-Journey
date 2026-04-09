#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    case 12:
    case 11:
    case 10:
        printf("Winter");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Summer");
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        printf("Monsoon");
        break;
    }
}
