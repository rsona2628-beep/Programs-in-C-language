#include<stdio.h>
void main()
{
    int arr[8],i;
    for(i=0;i<8;i++)
    {
        printf("Enter a number:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<8;i++)
    {
        if(i%2==0)
        {
            printf("%d ",arr[i]+1);
        }
        else
        {
            printf("%d ",arr[i]-1);
        }
    }
    getch();
}
