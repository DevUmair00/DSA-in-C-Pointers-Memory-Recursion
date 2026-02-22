#include <stdio.h>

int main() {

    //1. Call Stack and Function Calls
    /*
        The call stack is a data structure used by a program to keep track of function calls and their local variables. When a function is called, a new stack frame is created on the call stack to store the function's parameters, local variables, and return address. When the function returns, its stack frame is removed from the call stack.

        For example, consider the following code:

        void functionA() {
            int x = 10;
            functionB();
        }

        void functionB() {
            int y = 20;
        }

        int main() {
            functionA();
            return 0;
        }

        In this code, when main() calls functionA(), a stack frame for functionA is created on the call stack. Inside functionA, when functionB() is called, another stack frame for functionB is created on top of the stack frame for functionA. When functionB returns, its stack frame is removed, and control goes back to functionA. Finally, when functionA returns, its stack frame is also removed, and control goes back to main().
    */



    /*
        Q10
    
        void A(int *a)
        {
           *a = *a + 10; 
        }

        int main(){
          int x = 5;
          A(&x);
          printf("%d", x);  		Output : 15  	// X   Pass by Pointer(Changed)
        }

        Q11

        int inc(int x)
        { 
          return x + 1; 
        }
        
        int main(){
          int a = 3;
          a = inc(inc(a));
          printf("%d", a);               
        }
        Output : 15      //  *(P) + 5   = 10 +5 = 15

    */



} 
