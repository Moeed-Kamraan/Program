#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;

}s4,s6={4,"shoib",93},s7={11,"zahid"};



int main()
{

    struct student s,s1,s5;
    s.roll_no=7;
    strcpy(s.name, "ishfaq");
    s.marks = 90;
//You cannot initialize a struct using the syntax s4 = {1}; in C. 
//This syntax is only allowed at the time of declaration. You must
//assign values individually after declaration.

//s4={1};

//printf("\n%d ",s4.roll_no);

printf("%d %s %.2f ",s.roll_no,s.name,s.marks);
s1=s;
printf("\n%d %s %.2f ",s1.roll_no,s1.name,s1.marks);

struct student s2 = {2,"kamraan",95};
printf("\n%d %s %.3f ",s2.roll_no,s2.name,s2.marks);

struct student s3 = {3,"moeed",95};
printf("\n%d %s %.1f ",s3.roll_no,s3.name,s3.marks);

printf("\ninfo about s6");
printf("\n%d %s %.3f ",s6.roll_no,s6.name,s6.marks);

printf("partial initialisation "); 

printf("\ninfo about s7");
printf("\n%d %s %.3f ",s7.roll_no,s7.name,s7.marks);


return 0;
}