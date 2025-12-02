#include<stdio.h>
int main()
{
    int a[10][10],n,i,j,x,y=0;
    printf("Enter order of square matrix:");
    scanf("%d",&n);
    printf("Enter matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nOriginal matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i==j)
            {
                x=x+a[i][j];
                }
        }
        }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if((i+j)==n-1)
            {
                y=y+a[i][j];
                }
        }
        }
    printf("\nSum of Diagonal 1 is %d\n",x);
    printf("\nSum of Diagonal 2 is %d\n",y);

    return 0;
}
