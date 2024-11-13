#include <stdio.h>
int main(){
int arr[5],sum=0,i,arr2[0];

printf("Enter the elements of an array  : ");
{
    for(i = 0; i<5;i++)
    {
    scanf("%d",&arr[i]);
    sum+=arr[i];

    }
    
}

arr2[0]=sum;

printf("The sum of the array  is %d ", arr2[0]);

return 0;

}