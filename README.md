# -Dynamic-2D-Array-Programs-in-C

 Dynamic 2D Array Programs in C

## Overview

This repository contains C programs demonstrating dynamic memory allocation for two-dimensional arrays using pointers and `malloc()`. These programs help in understanding dynamic matrix creation, memory management, pointer-to-pointer concepts, and runtime-sized arrays.

The programs are useful for:

- Beginners learning dynamic memory allocation
- Embedded systems learners
- College laboratory exercises
- Coding interview preparation
- Understanding pointer-to-pointer concepts

---

## Programs Included

### 1. Dynamic 2D Array Initialization

This program dynamically allocates memory for a 3×4 matrix, stores values using a simple formula, and displays the matrix.

#### Output Example

```text
0 1 2 3
1 2 3 4
2 3 4 5
```

#### Concepts Used

- Dynamic memory allocation
- malloc()
- Pointer to pointer
- Matrix creation
- Memory deallocation using free()

---

### 2. Dynamic Matrix Input and Display

This program allows the user to create a matrix of any size at runtime, enter elements, and display the matrix.

#### Output Example

```text
Rows: 2
Cols: 3

Enter elements:

1 2 3
4 5 6

Matrix:

1 2 3
4 5 6
```

#### Concepts Used

- Runtime memory allocation
- Dynamic matrix creation
- User-defined matrix size
- Pointer to pointer
- Memory management

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
dynamic-2d-array-programs/
│
├── dynamic_matrix_initialization.c
├── dynamic_matrix_input_display.c
└── README.md
```

---

## How to Compile

Compile a program:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

- Dynamic memory allocation using malloc()
- Pointer-to-pointer (`int **`)
- Creating dynamic matrices
- Accessing matrix elements dynamically
- Runtime-sized arrays
- Proper memory deallocation using free()
- Memory management best practices

---

## Memory Allocation Flow

### Step 1: Allocate Row Pointers

```c
arr = malloc(rows * sizeof(int *));
```

```text
arr
 │
 ├── row0
 ├── row1
 └── row2
```

---

### Step 2: Allocate Columns for Each Row

```c
arr[i] = malloc(cols * sizeof(int));
```

```text
arr
 │
 ├── [0][0] [0][1] [0][2] [0][3]
 ├── [1][0] [1][1] [1][2] [1][3]
 └── [2][0] [2][1] [2][2] [2][3]
```

---

### Step 3: Free Memory

```c
for(int i=0;i<rows;i++)
{
    free(arr[i]);
}

free(arr);
```

Always free child allocations first and then free the parent pointer.

---

## Learning Notes

### What does `int **arr` mean?

```c
int **arr;
```

`arr` is a pointer that stores addresses of row pointers.

```text
arr
 ↓
+-----+-----+-----+
|  *  |  *  |  *  |
+-----+-----+-----+
```

Each `*` points to a dynamically allocated row.

---

### Why use Dynamic 2D Arrays?

Advantages:

- Matrix size decided at runtime
- Efficient memory usage
- Useful for large datasets
- Common in embedded and systems programming
- Foundation for dynamic data structures

---

## Future Improvements

Possible future additions:

- Matrix addition
- Matrix subtraction
- Matrix multiplication
- Matrix transpose
- Jagged arrays
- Dynamic 3D arrays
- Sparse matrix implementation

---

## Author

**Harsha G**

Learning:

- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
