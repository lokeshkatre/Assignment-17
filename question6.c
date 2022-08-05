#include<stdio.h>
int main()
{
     char str[100];
     int length=0;
    printf("Enter String :\n");
    fgets(str, 100, stdin);
    for(int i=0;str[i];i++)
        length++;
    length--;
    for (int i = 0; i<length/2; i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    
    printf("\nThe string reverse is\n%s", str);
    return 0;
}