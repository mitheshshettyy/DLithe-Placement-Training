# DLithe C++ Practice Programs

A collection of beginner-friendly C++ programs created for practicing core programming concepts. The repository currently focuses on arrays, number logic, loops, conditionals, pointers, references, and basic problem-solving patterns.

## Overview

Each folder contains one standalone C++ program. The programs can be compiled and run independently, making the repository easy to use for learning, revision, and practice.

## Programs

| Folder | Source File | Topic | Description |
| --- | --- | --- | --- |
| `Array/p1` | `p1.cpp` | Arrays | Finds the largest element in an array. |
| `Array/p2` | `p2.cpp` | Arrays | Calculates the average of array elements. |
| `Array/p3` | `p3.cpp` | Arrays | Reverses an array in place. |
| `Array/p4` | `p4.cpp` | Arrays | Finds the second largest distinct element in an array. |
| `Array/p5` | `p5.cpp` | Arrays | Finds the third largest distinct element in an array. |
| `Array/p7` | `p7.cpp` | Arrays | Checks whether an array is a palindrome. |
| `String/p6` | `p6.cpp` | Numbers | Checks whether a number is a palindrome. |
| `String/p8` | `p8.cpp` | Numbers | Checks whether a number is an Armstrong number. |
| `String/p9` | `p9.cpp` | Strings | Prints alphabetic characters from a character array. |
| `Pointers` | `pointers.cpp` | Pointers | Demonstrates pointer usage with simple examples. |
| `References in C` | `pass-by-reference.cpp` | References | Shows pass-by-reference function behavior. |
| `References in C` | `pass-by-value.cpp` | References | Shows pass-by-value function behavior. |

## Repository Structure

```text
DLithe/
|-- Array/
|   |-- p1/
|   |   `-- p1.cpp
|   |-- p2/
|   |   `-- p2.cpp
|   |-- p3/
|   |   `-- p3.cpp
|   |-- p4/
|   |   `-- p4.cpp
|   |-- p5/
|   |   `-- p5.cpp
|   `-- p7/
|       `-- p7.cpp
|-- Pointers/
|   `-- pointers.cpp
|-- References in C/
|   |-- pass-by-reference.cpp
|   `-- pass-by-value.cpp
|-- String/
|   |-- p6/
|   |   `-- p6.cpp
|   |-- p8/
|   |   `-- p8.cpp
|   `-- p9/
|       `-- p9.cpp
`-- README.md
```

## Requirements

- C++ compiler such as `g++`
- Terminal, Command Prompt, or PowerShell

Check whether `g++` is available:

```bash
g++ --version
```

## How to Compile and Run

Open a terminal in the project directory, move into the program folder, compile the source file, and run the generated executable.

Example using `Array/p3`:

```bash
cd Array/p3
g++ p3.cpp -o main
./main
```

On Windows PowerShell:

```powershell
cd Array/p3
g++ p3.cpp -o main.exe
.\main.exe
```

To run another program, replace `Array/p3` and `p3.cpp` with the folder and file name you want to execute.

## Learning Objectives

- Practice array input, traversal, and manipulation
- Use loops and conditional statements to solve small problems
- Understand basic search and comparison logic
- Work with number reversal and digit extraction
- Strengthen C++ syntax, input, output, and compilation workflow
