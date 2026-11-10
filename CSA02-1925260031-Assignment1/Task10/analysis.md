# Task 10 – Expectations vs Execution

## Objective
To compare the expected and actual results of floating-point and integer-paise calculations when processing 4,000 electricity bills.

## Program Description
The program calculates the total amount for 4,000 bills using two methods:

1. Floating-point calculation using `float`.
2. Integer-paise calculation using `long long`.

Each bill is ₹162.50.

## Expected Output

```text
Bills: 4000
float total: 650000.00 rupees
integer-paise total: 65000000 paise = 650000.00 rupees
sizeof(float)=4, sizeof(long long)=8
```

## Actual Output

The program was executed successfully using OnlineGDB. The actual output matched the expected output.

## Comparison of Expected and Actual Results

| Parameter | Expected | Actual | Status |
|---|---:|---:|---|
| Number of bills | 4000 | 4000 | Match |
| Float total | ₹650000.00 | ₹650000.00 | Match |
| Integer-paise total | ₹650000.00 | ₹650000.00 | Match |
| Size of float | 4 bytes | 4 bytes | Match |
| Size of long long | 8 bytes | 8 bytes | Match |

## Analysis

Both calculation methods produced the same total in this test.

The value ₹162.50 is exactly representable in binary floating-point, so this particular test does not show a rounding difference.

However, floating-point calculations can introduce rounding errors with certain decimal values. Integer-paise calculations avoid such floating-point rounding issues and are more suitable for financial applications like electricity billing.

## Conclusion

The program executed successfully, and all actual results matched the expected results. Integer-paise arithmetic is recommended for accurate electricity billing calculations.
