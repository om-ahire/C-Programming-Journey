#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo1.txt", "w");
    fputc('a', fp);
    fputc('b', fp);
    fclose(fp);
}
