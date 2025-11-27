# include <stdio.h>
void main()
{
int i,n,a=0,b=1,sum=0;
printf("Enter a term upto which you want fibonacci series:");
scanf("%d",&n);
printf("%d,%d,",a,b);
for (i=1;i<=n;i++)
{ sum=a+b;
  printf("%d,",sum);
  a=b;
  b=sum;
}
getch();
}


