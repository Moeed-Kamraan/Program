#include<stdio.h>

void disp();

void main()
{

int i;
for(i=0;i<3;i++)
disp();

}
void disp()

{
    static int x=5; // static variable, retains its value between function calls
    int y =5;       // local variable, re-initialized with each function call
    x++;
    y++;
    printf("\n x=%d",x);
    printf("\n y=%d",y);
}