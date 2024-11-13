#include<stdio.h>

int fun1(int n);
int fun2(int n);

void main()

{
//  printf("%d",sizeof(char));
    printf("%d",fun1(5));

}

int fun1(int n)
{

if(n<=1)
return 1;

else 
return n*fun2(n-1);
}

int fun2(int n)
{
    if(n==1)
        return 1;
    else 
        return n*fun1(n-1);
}