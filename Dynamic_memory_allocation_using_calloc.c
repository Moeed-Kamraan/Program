#include<stdio.h>
#include<stdlib.h>


int n,*ptr,i;

int main()
{
printf("Enter the number : ");
scanf("%d",&n);

ptr=(int*)calloc(n,sizeof(int));

printf("Enter the values : ");
//
for(i=0;i<n;i++)
scanf("%d",(ptr+i));

printf("Entered  values are : ");

for(i=0;i<n;i++)
printf("%d ",*(ptr+i));


}


