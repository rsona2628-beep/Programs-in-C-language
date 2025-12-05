#include<stdio.h>
int main()
{
   void prime();
   prime();
   return 0;
}
void prime()
{
    int num,i,c=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {c=c+1;}
    }
    if(c==2)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    getch();
}
