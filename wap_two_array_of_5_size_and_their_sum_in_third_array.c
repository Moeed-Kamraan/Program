#include <stdio.h>
int main(){
int arr1[5],arr2[5],arr3[5],i;

printf("Enter the elements of first array : ");

for(i=0;i<5;i++)
{
    scanf("%d",&arr1[i]);

}

printf("Enter the elements of second array : ");

for(i=0;i<5;i++)
{
    scanf("%d",&arr2[i]);

   printf("\nThe elements at %d index is %d ",i,arr3[i]);

}
return 0;

}