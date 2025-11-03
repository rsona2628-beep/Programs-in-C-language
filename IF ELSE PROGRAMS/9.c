#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Absolute value: %d",(-num));
    }
    else
    {
        printf("Absolute value: %d",num);
    }
    getch();
}
