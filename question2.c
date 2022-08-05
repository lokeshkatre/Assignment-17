#include<stdio.h>
int main()
{
    char str[100],c;
    int count=0;
    printf("Enter string:\n");
    fgets(str,100,stdin);
    printf("Enter character:");
    scanf("%c",&c);

    for (int i = 0; str[i]; i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("\nOccurance of %c in string is %d times",c,count);
    return 0;
}