#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("demo.txt", "w");
    fprintf(fp, "Hello i am Om ");
    fclose(fp);
}