#include <stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("demo1.txt", "r");
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
}