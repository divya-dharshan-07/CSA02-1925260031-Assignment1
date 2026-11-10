
# Task 03 – Electricity Bill Calculation Using Slabs

## 1. Objective
To calculate an electricity bill using a slab-based tariff system in C.

## 2. Problem Description
The electricity bill is calculated based on the number of units consumed. Different rates are applied to different consumption slabs, along with a fixed charge.

## 3. Tariff Structure
- First 100 units: 0 paise per unit.
- Next 100 units: 225 paise per unit.
- Above 200 units: 450 paise per unit.
- Fixed charge: 5000 paise (Rs 50).

## 4. Implementation
The program uses a function named `compute_bill()` to calculate the total bill.

It uses conditional statements to determine the units in each slab and calculates the charges in paise.

## 5. Test Cases

| Units | Total Bill |
|---:|---:|
| 0 | Rs 50.00 |
| 100 | Rs 50.00 |
| 150 | Rs 162.50 |
| 200 | Rs 275.00 |
| 350 | Rs 950.00 |

## 6. Validation
The function checks for negative unit values and returns -1 for invalid input.

## 7. Result
The program successfully calculates electricity bills using progressive slab rates and a fixed charge.
