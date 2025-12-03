#include<stdio.h>
int main()
{
    char str[25];
    int i,count=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        count=count+1;
    }
    printf("\nLength of string including spaces %d",i);
    printf("\nLength of string excluding spaces %d",i-count);
    printf("\nNo. of words %d",(count+1));
    printf("\nNo. of spaces %d",count);
    return 0;
}
