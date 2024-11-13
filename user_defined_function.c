#include<stdio.h>

void sum();

int main()
{

sum();
printf("\nhi");
sum();

return 0;
}

void sum()
{
    int a,b,sum=0;


printf("\nEnter two numbers : ");
scanf("%d%d",&a,&b);

sum = a+b;

printf("\nThe sum is %d ",sum);

}
