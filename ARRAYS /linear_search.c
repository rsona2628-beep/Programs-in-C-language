#include<stdio.h>
void main()
{
    int x[50],n,i,s;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter list of %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
   printf("Enter value to be searched:");
   scanf("%d",&s);
   for(i=0;i<n;i++)
   {
       if(s==x[i])
       {
           printf("\n%d is found in %dth position",s,i+1);
           getch();
           exit(0);
       }
   }
   printf("The value %d is not present in the list",s);
    getch();
}
