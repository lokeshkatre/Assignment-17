#include <stdio.h>
int main()
{
    char str[100],c;
    int count=0;
    printf("Enter string:\n");
    fgets(str, 100, stdin);
    printf("Enter character to know frequency: ");
    scanf("%c",&c);
    for(int i=0;str[i];i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("\n%d",count);
    
    return 0;
}