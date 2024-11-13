#include <stdio.h>
int main(){
int arr[10],i,count=0,odd=0,eve=0;

printf("Enter the array numbers : ");

for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
//The below part of the program can be skipped i,e use of single for loop
// printf("The array elements are : ");

// for(i=0;i<5;i++)
// {
//     printf("%d\t",arr[i]);
// }

for(i=0;i<5;i++)
{
    if(arr[i]%2==0)
    ++eve;
    else //if(arr[i]%2==1)
    {
        ++odd;
    }
}
printf("The number of odd is %d and the number of even is %d ",odd ,eve);

return 0;

}