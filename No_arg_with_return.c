#include<stdio.h>

int sum(void);

void main()
{
float result;
result = sum();
printf("sum= %f",result);


}

int sum()
{

int a , b  ,sum=0;

printf("Enter two nums: ");
scanf("%d %d",&a,&b);

sum=a+b; // keep clean here  to return a+b
return sum; //return a+b
//return a+b
//return sum,a;
//return sum,b;

}