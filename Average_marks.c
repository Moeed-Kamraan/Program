#include<stdio.h>

void main()
{
int a[5],i,sum=0,avg;

printf("Enter the array : ");
for(i = 0;i<5;i++)
{
    
    scanf("%d",&a[i]);

}

for(i=0;i<5;i++)
{
    printf("%d\n",a[i]);
}


for(i=0;i<5;i++)
{
    
    sum= sum+a[i];


avg = sum/5;
}
printf("The sum of the array is %d\n ",sum );
printf("The average of the array is %d \n",avg );


}

