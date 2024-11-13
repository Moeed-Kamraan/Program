#include<stdio.h>

int main()
{
     int x = 5;
    int *ptr;
    ptr=&x;
    
    printf("\n(ptr)Address of x in hexadecimal = %X",ptr);
    printf("\nAddress of x in hexadecimal = %x",ptr);
    printf("\nAddress of x in integer = %d\n",ptr);

    printf("\n(&ptr)Address of pointer varible in hexadecimal = %x",&ptr);
    printf("\nAddress of pointer varible  = %x\n",&ptr);

    printf("\n(*ptr)Value to which pointer is pointing = %d",*ptr);
    printf("\nValue to which pointer  = %d\n",*ptr);

    return 0;
}