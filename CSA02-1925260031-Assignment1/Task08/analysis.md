# Task 08 – Compilation Process

## 1. Objective
To understand the different stages involved in converting a C source program into an executable file using GCC.

## 2. Stages of Compilation

### Stage 1: Preprocessing
The preprocessor handles header files, macros and preprocessor directives.

Command:
```bash
gcc -E main.c -o main.i
```

Output: `main.i`

### Stage 2: Compilation
The compiler converts the preprocessed C code into assembly language.

Command:
```bash
gcc -S main.i -o main.s
```

Output: `main.s`

### Stage 3: Assembly
The assembler converts assembly language into object code.

Command:
```bash
gcc -c main.s -o main.o
```

Output: `main.o`

### Stage 4: Linking
The linker combines object code with the required libraries and generates the executable file.

Command:
```bash
gcc main.o -o main.exe
```

Output: `main.exe`

## 3. Result
All four stages of the GCC compilation process were successfully performed. The final executable file was generated from the C source program.
