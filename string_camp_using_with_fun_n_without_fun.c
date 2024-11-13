#include <stdio.h>
#include<string.h>
int main(){
    int i,value,flag;
char s1[]="He",s2[]="Hello";

value = strcmp(s1,s2);

for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
{
if(s1[i]!=s2[i])
{
    flag = 1;
    break;
}

if(flag==0)
{
    printf("strings are not same");
}
else
printf("strings are same.");

}
return 0;

}