#include<stdio.h>
int main() {

    //1. Recursion and the Call Stack
    /*
        Recursion is a programming technique where a function calls itself in order to solve a problem. The call stack is a data structure used by a program to keep track of function calls and their local variables. When a recursive function is called, a new stack frame is created on the call stack for each call, which can lead to a large number of stack frames if the recursion is deep.

        For example, consider the following recursive function to calculate the factorial of a number:

        int factorial(int n) {
            if (n == 0) {
                return 1;
            } else {
                return n * factorial(n - 1);
            }
        }

        In this code, when factorial(5) is called, it will create stack frames for factorial(5), factorial(4), factorial(3), factorial(2), factorial(1), and factorial(0). Each stack frame will have its own local variable n and return address. When the base case is reached (n == 0), the function will start returning values back up the call stack, ultimately returning the result of 120 for factorial(5).
    */

    

}