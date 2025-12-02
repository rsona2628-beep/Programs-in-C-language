#include<stdio.h>
void main()
{
    int x[50],n,i,j,temp;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter list of %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    printf("\nNumbers in ascending order:");
    for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    getch();
}
