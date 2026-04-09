#include <stdio.h>

int main()
{
    int choice, num, i, isPrime, reverse, original, remainder;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Even/Odd\n");
        printf("2. Prime\n");
        printf("3. Palindrome\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number: ");
            scanf("%d", &num);

            if (num % 2 == 0)
                printf("Even\n");
            else
                printf("Odd\n");
            break;

        case 2:
            printf("Enter number: ");
            scanf("%d", &num);

            isPrime = 1;

            if (num <= 1)
                isPrime = 0;

            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime)
                printf("Prime\n");
            else
                printf("Not Prime\n");
            break;

        case 3:
            printf("Enter number: ");
            scanf("%d", &num);

            original = num;
            reverse = 0;

            while (num != 0)
            {
                remainder = num % 10;
                reverse = reverse * 10 + remainder;
                num = num / 10;
            }

            if (original == reverse)
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");
            break;

        case 4:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}