#include<stdio.h>
#include<string.h>


struct student
{
    int rollno;
    char name[20];
    float marks;

};

int main()
{

struct student s[3];

printf("\nfirst student info: ");
 s[0].rollno=1;
   strcpy(s[0].name,"ashfaq");
   s[0].marks=98;

   printf("\n%d %s %f",s[0].rollno,s[0].name,s[0].marks);

printf("\nsecond student info.");
 s[1].rollno=2;
   strcpy(s[1].name,"kamraan");
   s[1].marks=96;

printf("\n%d %s %f",s[1].rollno,s[1].name,s[1].marks);

printf("\nThird  student info.");
 s[2].rollno=3;
   strcpy(s[2].name,"moeed");
   s[2].marks=97;

printf("\n%d %s %f",s[2].rollno,s[2].name,s[2].marks);

}



