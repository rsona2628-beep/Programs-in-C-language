# include <stdio.h>
void main()
{
int i,n,a=0,b=1,sum=0;
printf("Enter a term upto which you want sum fibonacci series:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{ sum=a+b;
  a=b;
  b=sum;
}
printf("Sum of fibonacci series = %d",sum);
getch();
}
