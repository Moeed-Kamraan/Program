#include<stdio.h>

void main()
{

int a[] = {1,3,5,7};

int *p = &a[0];
int *q = &a[3];

printf("%d\n",*p);
printf("%d\n",p);

printf("%d\n",*q);
printf("%d\n",q);

q = q-1;
printf("%d\n",*q);
printf("%d\n",q);

*q = 23;
printf("%d\n",*q);
printf("%d\n",q);

printf("p-q = %d\n",p-q);  //p->2 and q->0

printf("q-p = %d\n",q-p);

q=q-2;
printf("\nvalue is %d",*q);
printf("\nAddress is %d",q);
//p=p-q;

//printf("%d",*p);

 }