#include<stdio.h>

void sum(float,float);

void main()

{
    float a,b;
    printf("Enter two numbers : ");
    scanf("%f %f",&a,&b);
//sum= a+b;

sum(a,b);

}

void sum(float x,float y)
{ 
    float result;
    result = x+y;
printf("sum = %f",result);

}