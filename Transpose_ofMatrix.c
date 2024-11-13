#include <stdio.h>
int main(){
int a[2][3],i,j,sum;

printf("Enter the elements of matrix : ");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);

    }
    
    }
printf("The elements  of  matrix are : \n");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);

        //sum+=a[i][j];
    }
    printf("\n");
}

printf("The transpose matrix is  : \n");
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d ",a[j][i]);

    }
    printf("\n");
    
    }


return 0;

}