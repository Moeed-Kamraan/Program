#include<stdio.h>

void disp();

void main()
{

disp();
disp();
//printf("%d",x);

}

void disp()
{
 
    static x;
    int y=10;
    x+=10;
    y--,y++;

    
    printf("x = %d\n",x);
    printf("y = %d\n",y);

}