#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int v_count = 0;
    int c_count = 0;
    char vowels[10] = {'a', 'i', 'e', 'o', 'u', 'A', 'I', 'E', 'O', 'U'};

    printf("Enter the String : ");
    scanf("%s", str);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            continue;

        for (int j = 0; j < 10; j++)
        {
            if (str[i] == vowels[j])
            {
                v_count++;
                break;
            }
            if (j == 9)
            {
                c_count++;
            }
        }
    }

    printf("Count of vowels : %d", v_count);
    printf("\n Count of consontant is : %d", c_count);
}