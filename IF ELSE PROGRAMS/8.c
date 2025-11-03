#include<stdio.h>
void main()
{
    char ch;
    int choice;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        choice='1';
    else if(ch>='A' && ch<='Z')
        choice='2';
    else if(ch>='0' && ch<='9')
        choice='3';
    else
        choice='4';
    switch(choice)
    {
    case '1':
        printf("%c is a lowercase alphabet",ch);
        break;
    case '2':
        printf("%c is a uppercase alphabet",ch);
        break;
    case '3':
        printf("%c is a digit",ch);
        break;
    default:
        printf("%c is special symbol",ch);
    }
  getch();
}
