# include <stdio.h>
void main()
{
int num,i,fact=1;
printf("Enter a number for which you want factorial:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{ fact=fact*i;}
printf("Factorial of %d = %d",num,fact);
getch();
}
