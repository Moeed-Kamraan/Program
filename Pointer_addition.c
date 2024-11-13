#include<stdio.h>


void  main()
{

//int arr[5];
int arr[5] = {1,2,3,4,5};
int *p=&arr[0];
int *q=&arr[0];
//p = p+q;  //invalid operations two pointers can't be added
printf("value is : %d\n",*p);
printf("address of element is : %u\n",p);
//p=p+1;
//printf("%d",*p);
p=p+2;

printf("value is : %d\n",*p);
printf("address of element is : %u\n",p);
//printf("%d",*p);
//p=p+3;
*p=32; 

printf("value is : %d\n",*p);
printf("address of element is : %u\n",p);
}