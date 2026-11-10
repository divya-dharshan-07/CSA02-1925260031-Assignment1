
# Task 07 – Integer and Floating-Point Arithmetic

## 1. Objective
To understand the differences between integer division, floating-point division, type casting and floating-point precision in C.

## 2. Problem Description
The program demonstrates how data types affect arithmetic operations and how floating-point values are represented in computers.

## 3. Integer Division
Expression: 5 / 2

Output: 2

Integer division discards the fractional part of the result.

## 4. Floating-Point Division
Expression: 5.0 / 2

Output: 2.50

Using a floating-point operand produces a floating-point result.

## 5. Type Casting

Casting after division:
(double)(5 / 2) = 2.00

Casting before division:
(double)5 / 2 = 2.50

Casting after integer division cannot restore the discarded fractional part.

## 6. Floating-Point Precision
Expression: 0.1 + 0.2

The result may be displayed as:
0.30000000000000004

This happens because some decimal fractions cannot be represented exactly in binary floating-point format.

## 7. Result
The program successfully demonstrates integer division, floating-point division, type casting and floating-point precision in C.
