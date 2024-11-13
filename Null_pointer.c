#include<stdio.h>

int main()
{

printf("unintialised pointers  ");
    int *ptr1;
    int *ptr2;

    printf("%d",*ptr1);
    printf("%d",*ptr2);


    if(ptr1==ptr2)
    {
        printf("\nPointers are same. ");
    }
    else
    printf("\nnot equal");

    printf("\nIntialised with Null. ");
    int *ptr3=NULL;
    int *ptr4=NULL;

    if(ptr3==ptr4)
    {
        printf("\nPointers are same(null pointer). ");
    }
    else
    printf("\nnot equal");



    return 0;

}