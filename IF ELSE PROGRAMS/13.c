#include<stdio.h>
void main()
{
    float marks;
    printf("Enter Total Marks obtained out of 100:");
    scanf("%f",&marks);
    if(marks>=85)
    {
     printf("Grade A");
    }
    else if(marks>=75 && marks<85)
    {
     printf("Grade B");
    }
    else
    {
     printf("Grade C");
    }
    getch();
}
