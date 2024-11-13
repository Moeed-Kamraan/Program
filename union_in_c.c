#include<stdio.h>
#include<string.h>

union student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    union student u;
    union student *ptr = &u;

u.rollno = 1;
strcpy(u.name,"ashfaq");
//u.marks = 98;


printf("Roll no = %d\n",ptr->rollno);
printf("Name = %s\n",ptr->name);
printf("Marks = %f",ptr->marks);

    return 0;
}
