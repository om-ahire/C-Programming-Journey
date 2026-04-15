#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    char pass[100];
    printf("Enter Login id : ");
    gets(name);
    printf("Enter the Password : ");
    gets(pass);

    if (strcmp(name, "om") == 0 && (strcmp(pass, "1234") == 0 0 -))
    {
        printf("login Successfully ");
    }
    else
    {
        printf("Invalid details ");
    }
}