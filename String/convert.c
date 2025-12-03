#include<stdio.h>
int main()
{
    char str[25];
    int i;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("\nConverted String\n");
    printf("%s",str);
    return 0;
}
