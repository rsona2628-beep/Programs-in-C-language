#include<stdio.h>
int main()
{
    int x[50],n,i,j,temp,s,start,end,mid;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter list of %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
  //Program for Bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted list is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
  //Program for Binary Search
    printf("\nEnter value to be searched:");
   scanf("%d",&s);
   start=0,end=n-1;
   for(i=0;i<n;i++)
   {
       mid=(start+end)/2;
       if(x[mid]==s)
       {
           printf("Search successful at %d position",mid+1);
           return 0;
       }
       if(x[mid]<s)
       {
           start=mid+1;
       }
       if(x[mid]>s)
       {
           start=mid-1;
       }
   }
   printf("Element not found.\n");
    return 0;
}
