#include<stdio.h>


void main()
{
 int a=10,b=5;

 int *p,*q;

 p=&a;
 //q=p;
 //*p=*q; //this will give an error 
printf("a= %d %d %d ",a,*p,*p);

}