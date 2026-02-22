#include <stdio.h>

int main() {
    
    // Declare an integer
    int x = 10;
    // Declare a pointer to it
    int *p = &x;

    // Print required values
    printf("Address of x: %d\n", p);
    printf("Value of x: %d\n", *p);
    printf("Address of x: %p\n", p);
    return 0;
}