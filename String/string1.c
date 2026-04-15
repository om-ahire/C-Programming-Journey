#include <stdio.h>
#include <string.h>
int main()
{
    char name[10];
    printf("Enter your name : ");
    gets(name);
    printf("Your name is : ");
    puts(name);
}