#include<stdio.h>

void fun(void);

void main()
{

fun();
printf("\nhi");
fun();


}

void fun()
{

int a = 5, b =  4 ,sum=0;

sum = a+b;
printf("\nsum = %d",sum);



}