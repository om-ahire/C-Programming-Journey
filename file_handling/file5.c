#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo3.txt", "w+");
    fputs("Hello I am Om  ", fp);
    fseek(fp, 6, SEEK_SET);
    fputs("2601", fp);
    fclose(fp);
}