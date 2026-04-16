#include <stdio.h>
int main()
{
    FILE *fp;
    char str[200];
    fp = fopen("demo.txt", "r");

    while (fscanf(fp, "%s", str) != EOF)
    {
        printf("%s ", str);
    }
    rewind(fp);
    while (fscanf(fp, "%s", str) != EOF)
    {
        printf("%s ", str);
    }
}