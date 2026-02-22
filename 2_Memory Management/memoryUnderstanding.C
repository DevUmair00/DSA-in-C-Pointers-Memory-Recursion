#include <Stdio.h>

int main() {

    //1. Memory Layout of a C Program
    /*        
        The memory layout of a C program typically consists of the following segments:
        1. Code Segment: This segment contains the compiled machine code of the program. It is read-only and shared among all instances of the program.
        2. Data Segment: This segment is divided into two parts:
            a. Initialized Data Segment: This part contains global and static variables that are initialized by the programmer.
            b. Uninitialized Data Segment (BSS): This part contains global and static variables that are not initialized by the programmer. They are initialized to zero by default.
        3. Heap: This segment is used for dynamic memory allocation. It grows upwards as memory is allocated.
        4. Stack: This segment is used for function call management, local variables, and control flow. It grows downwards as functions are called.
        
    */

/*
    //1. Understanding Pointers and Memory
    int *p = &x;
    printf("%d %d", x, *p);      Output : 10 10
*/

/*
    //2
    int x = 5;
    int *p = &x;
    *p = *p + 7;
    printf("%d", x);	Output : 12
*/

/*
    //3 
    int x = 4;
    int *p = &x;
    int *q = p;
    *q = 9;
    printf("%d %d", x, *p); 	Output : 9  9
*/

/*
    //4
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    printf("%d", *(p + 3));	Output : 40
*/

/*
    //5
    int arr[] = {2, 4, 6, 8};
    int *p = arr;
    printf("%d", *p++);		Output :  2     // Post-increment → print first, then move pointer. 
*/

/*
    //6
    int arr[] = {2, 4, 6, 8};
    int *p = arr;
    printf("%d", *(++p));    	Output : 4   // Pre-increment → move first, then print.
*/


/*
    //7
    int arr[] = {1, 3, 5, 7};
    printf("%d", *(arr + 2));       Output : 5     //Array behave as a Pointer
*/


/*
    //8
    int x = 10;
    int *p = &x;
    printf("%d", *(p) + 5); 	Output : 15      //  *(P) + 5   = 10 +5 = 15
*/

}
    