#include<stdio.h>

char cha(void);

void main()
{
char result;
result =cha();
printf("character = %c",result);


}

char cha()
{

char ch ;

printf("Enter a character : ");
scanf("%c",&ch);


return ch;
return 'e','o','p';// this statement will not execute 
// b/z after first return statement control will go to calling 
// function hence this statement will not execute. 

}