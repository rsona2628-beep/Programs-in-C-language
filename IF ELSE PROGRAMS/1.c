#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    printf("%d is negative",num);
    else if(num>0)
    printf("%d is positive",num);
    else
    printf("Given number is Zero");

    getch();
}
