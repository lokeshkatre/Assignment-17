#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter String :\n");
    fgets(str, 100, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] <= 122 && str[i] >= 97)
            str[i] -= 32;
    }
    printf("\nThe string in uppercase is\n%s", str);
    return 0;
}