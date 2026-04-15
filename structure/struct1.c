// #include <stdio.h>
// #include <string.h>

// struct emp
// {
//     int age;
//     char name[100];

//     /* data */
// } e1, e2, e3;
// int main()
// {
//     strcpy(e1.name, "Om");
//     e1.age = 22;

//     printf(" Name = %s", e1.name);
//     printf(" \n  Age = %d", e1.age);
// }
#include <stdio.h>
#include <string.h>

union emp
{
    int age;
    char name[10];

    /* data */
} e1;
int main()
{

    e1.age = 22;
    strcpy(e1.name, "Om");

    printf(" \n  Age = %d", e1.age);
    printf(" Name = %s", e1.name);
}
