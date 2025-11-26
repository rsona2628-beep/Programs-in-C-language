#include<stdio.h>
void main()
{
    int choice;
    float num1,num2,result;
    printf("Enter your choice(1-add,2-subtract,3-Multiply,4-Divide)");
    scanf("%d",&choice);
    printf("Enter two numbers");
    scanf("%f %f",&num1,&num2);
    switch(choice)
    {
        case 1 : result = num1+num2;
                 printf("Addition is %f",result);
                 break;
        case 2 : result = num1-num2;
                 printf("Subtraction is %f",result);
                 break;
        case 3 : result = num1*num2;
                 printf("Multiplication is %f",result);
                 break;
        case 4 :
                 if(num2==0)
                 {
                     printf("Division not allowed");
                 }
                 else
                 {
                 result = num1/num2;
                 printf("Division is %f",result);
                 }
                 break;
        default:
                 printf("Invalid input");
    }
    getch();
}
