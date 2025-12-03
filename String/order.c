#include<stdio.h>
int main()
{
    char name[50][20],temp[20];
    int i,j,n;
    printf("How many names?");
    scanf("%d",&n);
    printf("Enter names:\n");
    for(i=0;i<n+1;i++)
    {gets(name[i]);}
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n+1;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("\nNames in alphabetical order\n");
    for(i=0;i<n+1;i++)
    {
        printf("\n%s",name[i]);
    }
    return 0;
}
