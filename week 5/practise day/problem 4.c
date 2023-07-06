#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char final_str[100];
    int len, i, j;
    scanf("%s", str);
    len = strlen(str);
    for (i = 0, j = 0; i < len; i++)
    {
        if (str[i] == str[i + 1])
        {
            continue;
        }
        else
        {
            final_str[j++] = str[i];
        }
    }
    printf("%s\n", final_str);
    return 0;
}