#include<stdio.h>
int main()
{
    char str[100];
    int length=0;
    printf("Enter string:\n");
    fgets(str,100,stdin);
    for(int i=0;str[i];i++)
        length++;
    length--;
    printf("lenght of string is %d",length);
   return 0;
}