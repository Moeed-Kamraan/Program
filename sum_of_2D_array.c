#include <stdio.h>
int main(){
int arr[2][3],i,j,sum=0;


printf("Enter the elements of 2D array : ");

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    
    }
    
}

printf("The elements of an array are : ");

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    printf("%d ",arr[i][j]);
    sum+=arr[i][j];
    printf("\n");
}


return 0;

}