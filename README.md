# DLithe C++ Practice Programs

A collection of beginner-friendly C++ programs created for practicing core programming concepts. The repository currently focuses on arrays, number logic, loops, conditionals, pointers, references, and basic problem-solving patterns.

## Overview

Each source file contains one standalone C++ program. The programs can be compiled and run independently, making the repository easy to use for learning, revision, and practice.

## Programs

| Folder | Source File | Topic | Description |
| --- | --- | --- | --- |
| `Array` | `largest.cpp` | Arrays | Finds the largest element in an array. |
| `Array` | `average.cpp` | Arrays | Calculates the average of array elements. |
| `Array` | `reverse.cpp` | Arrays | Reverses an array in place. |
| `Array` | `secondlargest.cpp` | Arrays | Finds the second largest distinct element in an array. |
| `Array` | `thirdlargest.cpp` | Arrays | Finds the third largest distinct element in an array. |
| `Array` | `palindrome.cpp` | Arrays | Checks whether an array is a palindrome. |
| `String` | `palindrome.cpp` | Numbers | Checks whether a number is a palindrome. |
| `String` | `armstrong.cpp` | Numbers | Checks whether a number is an Armstrong number. |
| `String` | `alphabets.cpp` | Strings | Prints alphabetic characters from a character array. |
| `Pointers` | `pointers.cpp` | Pointers | Demonstrates pointer usage with simple examples. |
| `References in C` | `pass-by-reference.cpp` | References | Shows pass-by-reference function behavior. |
| `References in C` | `pass-by-value.cpp` | References | Shows pass-by-value function behavior. |

## Repository Structure

```text
DLithe/
|-- Array/
|   |-- average.cpp
|   |-- largest.cpp
|   |-- palindrome.cpp
|   |-- reverse.cpp
|   |-- secondlargest.cpp
|   `-- thirdlargest.cpp
|-- Pointers/
|   `-- pointers.cpp
|-- References in C/
|   |-- pass-by-reference.cpp
|   `-- pass-by-value.cpp
|-- String/
|   |-- alphabets.cpp
|   |-- armstrong.cpp
|   `-- palindrome.cpp
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

Example using `Array/reverse.cpp`:

```bash
cd Array
g++ reverse.cpp -o reverse
./reverse
```

On Windows PowerShell:

```powershell
cd Array
g++ reverse.cpp -o reverse.exe
.\reverse.exe
```

To run another program, replace `Array` and `reverse.cpp` with the folder and file name you want to execute.

## Learning Objectives

- Practice array input, traversal, and manipulation
- Use loops and conditional statements to solve small problems
- Understand basic search and comparison logic
- Work with number reversal and digit extraction
- Strengthen C++ syntax, input, output, and compilation workflow
