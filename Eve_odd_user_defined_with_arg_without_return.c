#include<stdio.h>

void odd_eve(int);

void main()
{
    int num;

printf("Enter a number : ");
scanf("%d",&num);
odd_eve(num);

}

void odd_eve(int num )
{

//int num;

if(num%2==0)
{
    printf("The number %d is even.",num);
}
else
{
    printf("The number %d is Odd",num);
}

}