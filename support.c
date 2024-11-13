#include<stdio.h>

void disp()
{
    extern int x;

    printf("Hello from support file.");
    printf("x= %d",x);
}