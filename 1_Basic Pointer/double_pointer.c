#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **q = &p;

    printf("%d\n", x);     // prints value of x
    printf("%d\n", &x);    // prints address of x
 
    printf("%d\n", p);     // prints address stored in pointer p (which is address of x)
    printf("%d\n", *p);    // prints value at the address stored in p (which is value of x)
 
    printf("%d\n", q);    // prints address stored in pointer q (which is address of p)
    printf("%d\n", *q);   // prints value at the address stored in q (which is address of x, same as p)
    printf("%d\n", **q);  // prints value at the address stored in *q (which is value of x, same as *p)


    int *b = &q; // This will cause a warning because q is of type int** and b is of type int*
    printf("%d\n", b);    // prints address stored in b (which is address

  }