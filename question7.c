#include <stdio.h>
int main()
{
    char str[100];
    int countAlpha=0, countSpec=0, countDig=0;
    printf("Enter String :\n");
    fgets(str, 100, stdin);
    for (int i = 0; str[i]; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            countAlpha++;
        else if (str[i] >= 48 && str[i] <= 57)
            countDig++;
        else if (str[i] >= 32)
            countSpec++;
    }
    printf("\nNo. of alphabate : %d\nNo. of digits : %d\nNo. of special characters : %d",countAlpha,countDig,countSpec);
    return 0;
}