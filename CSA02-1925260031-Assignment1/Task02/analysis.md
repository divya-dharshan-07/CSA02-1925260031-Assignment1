
# Task 02 – Meter Register Rollover

## 1. Objective
To understand how a fixed-width unsigned integer meter register handles rollover and how electricity consumption can be calculated.

## 2. Problem Description
A 16-bit meter register can store values from 0 to 65535. When the reading exceeds its maximum value, it rolls over to zero.

## 3. Data Type Used
The program uses `unsigned short` as the meter data type.

The program displays:
- Size of the meter data type.
- Maximum reading using `USHRT_MAX`.

## 4. Normal Consumption
Previous reading = 1200
Current reading = 1530

Consumption = 1530 - 1200 = 330 units.

## 5. Rollover Calculation
Previous reading = 65400
Current reading = 120

For a 16-bit register:

Consumption = 65536 - 65400 + 120
Consumption = 256 units.

## 6. Implementation
The `consumption()` function converts the subtraction result back to `meter_t`. For a 16-bit unsigned type, this produces modulo-65536 behaviour.

## 7. Result
The program demonstrates normal meter consumption and rollover handling. The expected results are 330 units for normal consumption and 256 units for rollover.

Note: The expected rollover behaviour assumes that `unsigned short` is 16 bits on the target system.
