📌 DSA in C – Pointers, Memory Management & Recursion

📖 Project Overview

This repository contains structured lab exercises and analytical problems focused on building strong foundations in Pointers, Memory Management, and Recursion using C.

The goal of this project is not just to write code, but to deeply understand:
How memory works (Stack vs Heap)
How pointers manipulate memory
How recursion uses the call stack
How dynamic memory is safely allocated and freed
How common memory errors occur

This lab is designed as a concept + implementation + analysis based learning approach.

🎯 Learning Objectives

    By completing these exercises, I practiced:
    Pointer declaration and dereferencing
    Pointer arithmetic
    Swap using pointers (Call by Reference)
    Stack frame tracing
    LIFO behavior in function calls
    Recursive call depth analysis
    Dynamic memory allocation using malloc, calloc, realloc
    Proper use of free
    Identifying memory leaks, dangling pointers, and wild pointers

📂 Project Structure

The repository is divided into structured parts:

🔹 Part A – Basic Pointer Concepts

  Understanding p vs *p
    Printing addresses and values
    Pointer arithmetic
    Array and pointer relationship
    Fixing swap using pointers

🔹 Part B – Stack & Recursion Thinking

  Function call tracing
    Stack frame analysis
    LIFO behavior
    Recursive output tracing
    Base case importance
    Infinite recursion & stack overflow

🔹 Part C – Memory Management & Advanced Tasks

  Dynamic array using malloc
    Resizing using realloc
    Safe memory deallocation
    Detecting memory leaks
    Dangling pointer cases
    Use-after-free examples

🧠 Key Concepts Covered
    
  🔸 Stack vs Heap Memory

      Stack stores local variables and function frames
      Heap stores dynamically allocated memory
      Stack grows downward, heap grows upward

🔸 Pointer Arithmetic

      Pointer movement depends on data type:
      p + 1 = current_address + sizeof(data_type)
      Example:
            int* → moves 4 bytes (usually)
            char* → moves 1 byte
            double* → moves 8 bytes

🔸 Recursion & Call Stack

      Each recursive call creates a new stack frame
      Base case prevents infinite recursion

    Recursion follows LIFO principle
    Too many recursive calls → Stack Overflow

🔸 Memory Errors Explained

    Memory Leak
    Dangling Pointer
    Wild Pointer
    se-After-Free
    Double Free

📌 Why This Project Matters

  Before moving to advanced Data Structures like:

    Linked Lists
    Trees
    Graphs
    Dynamic Stacks & Queues
    
    It is critical to understand:
    Memory behavior
    Pointer manipulation
    Stack execution flow
    Dynamic allocation safety

This repository builds that foundation...
