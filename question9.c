#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:\n");
    fgets(str,100,stdin);
    for(int i=0;str[i];i++)
    {
        for(int j=i;str[j];j++)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("\nThe sorted string is:\n%s",str);
    
    return 0;
}