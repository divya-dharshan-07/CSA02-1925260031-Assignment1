
# Task 05 – Modular Electricity Billing Program

## 1. Objective
To demonstrate modular programming in C using multiple source files and a header file.

## 2. Problem Description
The program calculates an electricity bill based on the number of units consumed using a slab-based tariff system.

## 3. File Organization

- `main.c`: Contains the main function and calls compute_bill().
- `billing.h`: Contains tariff constants and the function declaration.
- `billing.c`: Contains the implementation of the billing calculation.

## 4. Tariff Structure

- First 100 units: 0 paise per unit.
- Next 100 units: 225 paise per unit.
- Above 200 units: 450 paise per unit.
- Fixed charge: 5000 paise (Rs 50).

## 5. Modular Programming
The program separates the main logic and billing calculation into different files.

The header file allows the main program to access the billing function declaration and shared constants.

## 6. Debugging
The program uses `#ifdef DEBUG` to display additional information when compiled with the DEBUG macro.

This helps examine unit consumption, energy charges, fixed charges and total bill.

## 7. Test Case

Input:
150 units

Calculation:
- First 100 units = Rs 0.00
- Next 50 units = Rs 112.50
- Fixed charge = Rs 50.00

Total bill = Rs 162.50

## 8. Result
The program successfully calculates the electricity bill using modular C programming and separates the implementation into source and header files.
