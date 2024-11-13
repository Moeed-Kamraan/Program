#include <stdio.h>
int main(){
int a,b,s,r;
a=10,b=20;

int *ptr,*ptr1;
int *p,*q;
r=(&a,&b);
s=&a,&b;

printf("program 1. ");
printf("\nValue of a is %d : ",a);
printf("\nValue of a is %d : ",*p);

printf("\nAddress of a is %x : ",&a);
//here the address value of a is 
//destroyed or discarded b/z of bracket
printf("\nAddress  is %x : ",r);
printf("\nAddress of p is %x : ",&p);

//it will print address of a and not of b.
printf("\nAddress  is %x : ",s);

// printf("program 2. ");

// ptr=&a;
// ptr1=&b;



// printf("\nThe value  of a is %d : ",a);
// printf("\nThe value  of a is %d : ",*ptr);
// printf("\nThe address of a is %x : ",ptr);
// printf("\nThe address of pointer is %x : ",&ptr);

// printf("\nThe value  of b is %d : ",b);
// printf("\nThe value  of b is %d : ",*ptr1);
// printf("\nThe address of b is %d : ",ptr1);

return 0;

}