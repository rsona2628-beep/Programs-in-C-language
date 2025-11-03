#include<stdio.h>
void main()
{
    float a,b,c,D,real,img,r1,r2,r3;
    printf("Enter coefficients a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
       r1=(-b+sqrt(D))/(2*a);
       r2=(-b-sqrt(D))/(2*a);
       printf("Roots are real and distinct:");
       printf("%f %f",r1,r2);
    }
    else if(D==0)
    {
      r3=-b/(2*a);
      printf("Roots are real and equal:");
      printf("%f %f",r3,r3);
    }
    else
    {
       real=-b/(2*a);
       img=sqrt(-D)/(2*a);
       printf("Roots are imaginary and distinct:");
       printf("%f+%fi, %f-%fi",real,img,real,img);
    }
    getch();
}

