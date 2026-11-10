
# Task 01 – Problem Analysis

## 1. Objective
To understand how electricity meter readings can be stored and processed using integer data types in C.

## 2. Problem Description
An electricity meter records previous and current readings. The program calculates the units consumed by subtracting the previous reading from the current reading.

## 3. Data Types Used
The program uses `unsigned int` to store both meter readings because normal meter readings are non-negative values.

## 4. Calculation
Units consumed = Current reading - Previous reading

Example:
- Previous reading = 1200
- Current reading = 1350
- Units consumed = 1350 - 1200 = 150

## 5. Input Validation
The program checks whether the current reading is smaller than the previous reading. If so, it displays an error message and stops the calculation.

Note: This version does not calculate meter rollover. Rollover handling requires additional logic.

## 6. Complexity Analysis
The program performs a fixed number of operations:
- Reading values stored in variables.
- Comparing two readings.
- Subtracting the readings.
- Printing the result.

Therefore, the time complexity is O(1), and the auxiliary space complexity is O(1).

## 7. Integer vs Text Representation
Integer representation:
- Stores readings as numeric values.
- Supports direct arithmetic operations.
- Uses less processing than converting text into numbers.

Text representation:
- Stores readings as character sequences.
- Requires conversion or parsing before arithmetic.
- May require additional validation for non-numeric characters.

## 8. Result
The program successfully calculates electricity consumption for valid increasing meter readings. For the example readings, the calculated consumption is 150 units.
