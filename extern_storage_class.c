#include<stdio.h>

voidfun1();
voidfun2();
int x=10;
void main()
{
    extern x;
    printf("x in main = %d",x);

    disp1();
    disp2(); 

}

void fun1()
{
    int y = 23;
    printf("y in fun1 = %d",y);
}

void fun2()
{
    extern int x ;
    printf("x in fun2 = %d",x);
}
