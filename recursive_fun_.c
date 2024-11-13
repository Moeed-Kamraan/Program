#include<stdio.h>

int sum(int x);

int sum(int x)
{
int s=0;

if(x==1)
return 1;

s=x+sum(x-1);// here we can directly return the calculated value without using a variable. 
           // return x+sum(x-1);
return s;
}
void main()
{
int a,x;
printf("Enter the range upto which the sum is to be calculated : ");
scanf("%d",&x);
a=sum(x);
printf("The sum of first %d numbers is %d. ",x,a);

}

