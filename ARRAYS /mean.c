#include<stdio.h>
void main()
{
  int x[50],n,i,sum;
  float mean;
  printf("How many students?");
  scanf("%d",&n);
  printf("Enter marks of students:\n");
  for(i=0;i<n;i++)
{
  scanf("%d",&x[i]);
}
sum=0;
for(i=0;i<n;i++)
{
  sum=sum + x[i];
}
mean=(float) sum/n;
printf("\nMean=%6.2f",mean);
printf("\nMarks greater than mean:");
for(i=0;i<n;i++)
{
 if(x[i]>mean)
{
  printf("%5d",x[i]);
}
}
getch();
}
