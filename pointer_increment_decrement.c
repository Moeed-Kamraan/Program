#include<stdio.h>

int main() {
    int a[] = {3, 2, 67, 1, 56};

    int *p;
    p = a;  // Point to the first element of array a

    printf("post_pre_increment...\n");

    printf("%d\n", *p++);  // Prints a[0] (3), then p points to a[1]
    printf("%d\n", *p++);  // Prints a[1] (2), then p points to a[2]

    printf("%d %d\n", *p++, *p++);  // Prints a[2] (67) and a[3] (1), then p points to a[4]
    printf("%d\n", *p);  // Prints a[4] (56), no increment

    p = a;  // Reset pointer p

    printf("%d\n", *++p);  // Increments p to a[1], then prints a[1] (2)
    printf("%d\n", *++p);  // Increments p to a[2], then prints a[2] (67)

    printf("post_pre_decrement...\n");

    int b[] = {3, 2, 67, 1, 56};

    int *q;
    q = &b[4];  // Point q to the last element of array b (b[4] = 56)

    printf("%d\n", *q--);  // Prints b[4] (56), then q points to b[3]
    printf("%d\n", *q--);  // Prints b[3] (1), then q points to b[2]

    printf("%d %d\n", *q--, *q--);  // Prints b[2] (67) and b[1] (2), then q points to b[0]
    printf("%d\n", *q);  // Prints b[0] (3), no decrement

    q = &b[4];  // Reset pointer q to b[4]

    printf("%d\n", *--q);  // Decrements q to b[3], then prints b[3] (1)
    printf("%d\n", *--q);  // Decrements q to b[2], then prints b[2] (67)

    return 0;
}
