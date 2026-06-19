#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter the String : ");
    scanf("%s", name);
    int flag = 1;
    int i = 0;
    int j = strlen(name) - 1;
    while (i < j)
    {
        if (name[i] = !name[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if (flag == 1)
    {
        printf("Given String is Palindrome ");
    }
    else
    {
        printf("Given String is not Palindrome ");
    }

    // char name[100];
    // int len;
    // char rev[100];
    // printf("Enter the String : ");
    // scanf("%s", name);

    // len = strlen(name);
    // for (int i = 0; i < len; i++)
    // {
    //     rev[len - 1 - i] = name[i];
    // }
    // rev[len] = '\0';
    // if (strcmp(name, rev) == 0)
    // {
    //     printf("Given string is palindrome ");
    // }
    // else
    // {
    //     printf("Given String is not palindrome ");
    // }
}