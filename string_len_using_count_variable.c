#include <stdio.h>
#include<string.h>
int main(){
char name[17];
int count=0,i;

printf("Enter the string : ");
gets(name);

//printf("\nThe entered name is %s.",name);

while(name[i]!='\0')
{
    count++;
    i++;
}
puts(name);
    printf("\nThe length of  string is %d .",count);


return 0;

}