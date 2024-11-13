#include<stdio.h>

typedef struct student
{

    int b;
    int a;
    int c;
    
    }stu;

int main()
{

//stu s={6, 4, 9 };
stu s ={.c=6, .a=4, .b=9 };

printf("%d %d %d",s.a,s.b,s.c);
return 0;

}
