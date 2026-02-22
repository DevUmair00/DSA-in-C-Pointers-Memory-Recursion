#include <stdio.h>

void f(int n){
  if(n==0) return;
  printf("%d ", n);
  f(n-1);
}

int main(){ 
  f(3); 
}		

// Output : 3  2  1 	// Print first, then recurse.
