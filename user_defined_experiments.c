#include<stdio.h>

//void sum();

void main()
{

sum();
printf("\nhi");
sum();

}

float sum()
{
    int a,b,sum=0;


printf("\nEnter two numbers : ");
scanf("%d%d",&a,&b);

sum = a+b;

printf("The sum is %d ",sum);

}
