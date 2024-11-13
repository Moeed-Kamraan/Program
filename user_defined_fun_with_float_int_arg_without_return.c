#include<stdio.h>

void sum(float ,int);

void main()
{
    int b;
    float a;

printf("Enter one float and one integer numbers : ");
scanf("%f %d",&a,&b);

sum(a,b);

}

void sum (float x , int y)
{

float Sum;
Sum = x+y;

printf("sum = %f",Sum);
}






