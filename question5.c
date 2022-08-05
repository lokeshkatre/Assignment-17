#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter String :\n");
    fgets(str, 100, stdin);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] <= 90 && str[i] >= 65)
            str[i] += 32;
    }
    printf("\nThe string in lowercase is\n%s", str);
    return 0;
}