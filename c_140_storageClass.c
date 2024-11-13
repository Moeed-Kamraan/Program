#include <stdio.h>
//#include<stdio.h>


void fun1();
int main()
{
    int a=1;
    fun1();
    {
        int a =23;
        printf(\n"%d",a);
    }
    {
        printf("\ninside block1 a = %d",a++);
    }
    printf("\nInside main a = %d",a);
    return 0;
}

void fun1()
{
    int a = 45;
    printf("\nInside fun1 a = %d",a);
}