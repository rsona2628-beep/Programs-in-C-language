#include<stdio.h>
void main()
{
    int choice;
    printf("\nEnter Number of DAY to be displayed(1,2,3,4,5,6,7):");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf(" MONDAY ");
               break;
        case 2:printf(" TUESDAY ");
               break;
        case 3:printf(" WEDNESDAY ");
               break;
        case 4:printf(" THURSDAY ");
               break;
        case 5:printf(" FRIDAY ");
               break;
        case 6:printf(" SATURDAY ");
               break;
        case 7:printf(" SUNDAY ");
               break;
        default:
            printf("Invalid input");
    }
    getch();
}
