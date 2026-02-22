#include <stdio.h>

int sum(int n){
  if(n==0) return 0;
  return n + sum(n-1);
}

int main()
{ 
    printf("%d", sum(4)); 
}  

// Output : 10		


// 0 return
// 1 + [0 -> 1 
// 2 + [1 -> 3 
// 3 + [3	-> 6
// 4 + [6   10
