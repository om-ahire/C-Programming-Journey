#include <stdio.h>
int main()
{
    int len;
    FILE *om;
    om = fopen("demo3.txt", "r");
    fseek(om, 0, SEEK_END);
    len = ftell(om);
    fclose(om);
    printf("THE LENGTH OF FILE IS %d bytes ", len);
    return 0;
}