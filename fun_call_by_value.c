#include<stdio.h>

void fun(int, int);

void main()
{
    int x=5,y=7;

fun(x,y);
printf("\nInside main(calling function)");
printf("\n x=%d y=%d",x,y);

}

void fun(int x,int y)
{
    x=7; //x=5,y=5; //will give error comma operator.
    y=5;  //x=5

    printf("\nInside fun(called function)");
    printf("\n x=%d y=%d",x,y);

}