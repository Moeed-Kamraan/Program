#include<stdio.h>
void sum(void);
void mul(void);
void sub(void);

void main()
{

printf("sum function");
sum();
printf("\nmul function");
mul();
printf("\nsub function");
sub();

}

void sum()
{

int a = 5, b = 4,sum=0;
sum = a+b;
printf("\nsum = %d",sum);

}

void mul()
{

int a = 5, b = 4,mul=0;
mul = a*b;
printf("\nmul = %d",mul);

}

void sub()
{

int a = 5, b = 4,sub=0;
sub = a-b;
printf("\nsub = %d",sub);

}

