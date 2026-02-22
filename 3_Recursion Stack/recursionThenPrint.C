#include <stdio.h>

void f(int n){
  if(n==0) return;
  f(n-1);
  printf("%d ", n);
}

int main()
{ 
    f(3); 
}   		

// Output : 1  2   3  	// Recurse first, then print.
