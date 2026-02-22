#include <stdio.h>

int main() {

  int a = 10, b = 20;
  simpleSwap(a, b);
  printf("After swap: a = %d, b = %d\n", a, b); 
  // Output will still be: a = 10, b = 20

  swapUsingPointers(&a, &b);
  printf("After swap using pointers: a = %d, b = %d\n", a, b);
  // Output will be: a = 20, b = 10
}

void simpleSwap(int a, int b) {
    int temp = a; 
    a = b;       
    b = temp;     
}

void swapUsingPointers(int *a, int *b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;    
}