#include<stdio.h>
#include<stdlib.h>


int n,*ptr,i;

int main()
{
    printf("Enter the value of n : ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL);
    {
        printf("Memory not allocated.");

    }

    printf("Enter the values : ");

    for(i=0;i<n;i++)
    scanf("%d",(ptr+i));

    printf("Enter the new value of n : ");
    scanf("%d",&n);

    int *ptr1 = (int *)realloc(ptr,n*sizeof(int));

    printf("\nPrevious address = %d updated address = %d ",ptr,ptr1);

    printf("\nEntered  values are : ");
    for(i=0;i<n;i++)
    printf("%d ",*(ptr1+i));

    free(ptr1);
return 0;
}


