
# Task 04 – Macros and Inline Functions

## 1. Objective
To understand and demonstrate the use of macros and inline functions in C.

## 2. Problem Description
The program performs simple calculations using preprocessor macros and inline functions and compares their usage.

## 3. Macros Used

### RUPEES_TO_PAISE(r)
Converts rupees into paise by multiplying the value by 100.

### SQUARE(x)
Calculates the square of a given expression.

### MAX_VALUE(a, b)
Returns the greater of two values.

Parentheses are used in macro definitions to help avoid operator precedence problems.

## 4. Inline Functions Used

- `square_long()` calculates the square of a long integer.
- `max_int()` returns the greater of two integers.

Inline functions provide type checking and evaluate arguments once.

## 5. Test Cases

| Operation | Input | Expected Output |
|---|---|---|
| Rupees to paise | 12 | 1200 |
| Square macro | 3 + 1 | 16 |
| Maximum macro | 3, 5 | 5 |
| Inline square | 4 | 16 |
| Inline maximum | 3, 5 | 5 |

## 6. Macros vs Inline Functions

Macros are processed by the preprocessor and perform textual substitution. Inline functions are regular functions with an inline optimization suggestion to the compiler.

Inline functions provide better type checking and avoid repeated evaluation of arguments.

## 7. Result
The program successfully demonstrates three macros and two inline functions with the expected outputs.
