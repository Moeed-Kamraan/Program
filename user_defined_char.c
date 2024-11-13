#include<stdio.h>

char fun();
void main()
{
    char ch;
ch= fun();
printf("Entered character is : %c",ch);

printf("\nhi");
ch= fun();
printf("Entered character is : %c",ch);
}
char fun()
{
    char c;
printf("\nEnter a character : ");
scanf(" %c", &c);

return c; //return 'c'; 
}
