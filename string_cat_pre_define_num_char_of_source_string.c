#include <stdio.h>
#include<string.h>
int main(){
char s1[27]="dar",s2[35]="kamraan";


// printf("Enter the first string : ");
// gets(s1);

// printf("Enter the second string : ");
// gets(s2);

strncat(s1,s2,2);
puts(s1);

strcat(s2,s1); 
puts(s2);

return 0;

}