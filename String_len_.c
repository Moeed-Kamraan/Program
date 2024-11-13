#include <stdio.h>
#include<string.h>
int main(){
char name[17];
int count=0,i;

printf("Enter the string : ");
gets(name);

printf("\nThe entered name is : %s",name);


count=strlen(name);

printf("\nThe string length is : %d ",count);




return 0;

}