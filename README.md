# DLithe C++ Array Practice

A compact collection of beginner-friendly C++ programs focused on array operations. This repository is useful for practicing core programming fundamentals such as input handling, loops, conditional logic, in-place updates, and simple search algorithms.

## Project Overview

The project is organized into separate folders, where each folder contains one standalone C++ program.

| Folder | Source File | Description |
| --- | --- | --- |
| `p1` | `p1.cpp` | Finds the largest element in an array. |
| `p2` | `p2.cpp` | Calculates the average of array elements. |
| `p3` | `p3.cpp` | Reverses an array in place. |
| `p4` | `p4.cpp` | Finds the second largest element in an array. |
| `p5` | `p5.cpp` | Finds the third largest element in an array. |

## Repository Structure

```text
DLithe/
├── p1/
│   └── p1.cpp
├── p2/
│   └── p2.cpp
├── p3/
│   └── p3.cpp
├── p4/
│   └── p4.cpp
├── p5/
│   └── p5.cpp
└── README.md
```

## Requirements

- A C++ compiler such as `g++`
- A terminal or command prompt

To check whether `g++` is installed:

```bash
g++ --version
```

## How to Compile and Run

Each program can be compiled and executed independently.

Example for `p3`:

```bash
cd p3
g++ p3.cpp -o main
./main
```

On Windows PowerShell, run the compiled program with:

```powershell
.\main.exe
```

## Program Details

### 1. Largest Element

Located in `p1/p1.cpp`.

This program accepts array elements from the user and prints the largest value.

### 2. Average of Array

Located in `p2/p2.cpp`.

This program calculates the sum of all entered values and prints the average.

### 3. Reverse Array

Located in `p3/p3.cpp`.

This program reverses the array in place using two pointers.

### 4. Second Largest Element

Located in `p4/p4.cpp`.

This program finds the second largest distinct value in the array and handles cases where no second largest value exists.

### 5. Third Largest Element

Located in `p5/p5.cpp`.

This program finds the third largest distinct value in the array and handles cases where no third largest value exists.

## Learning Objectives

- Understand array declaration and traversal in C++
- Practice user input and output with `cin` and `cout`
- Apply loops and conditionals to solve basic problems
- Work with helper functions for cleaner logic
- Build confidence with compiling and running C++ programs from the terminal
