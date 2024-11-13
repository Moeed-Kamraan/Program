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

    // Assign roll number and print
    ptr->rollno = 1;
    printf("Roll no: %d\n", ptr->rollno);

    // Assign name and print (Note: This overwrites the roll number in memory)
    strcpy(ptr->name, "Ashfaq");
    printf("Name: %s\n", ptr->name);

    // Assign marks and print (This overwrites the name in memory)
    ptr->marks = 89.5;
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
