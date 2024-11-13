#include<stdio.h>

void fun1();
void fun2();
int x=10;
void main()
{
    //extern int x;
    printf("x in main = %d",x);

    fun1();
    fun2(); 

}

void fun1()
{
    int x =1;
    x+=5;
  
    printf("x in fun1 = %d",x);
}

void fun2()
{
    int y = 4;
    y++;
    printf("y in fun2 = %d",y);
}
int x=5;