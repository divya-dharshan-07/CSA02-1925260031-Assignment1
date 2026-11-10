# Task 09 – Implementation and Testing

## 1. Objective

To implement and test an electricity billing program for Grama Jyothi Rural Electricity Co-operative using C programming.

The program calculates electricity consumption, handles meter rollover, validates user input, applies tariff slabs, and displays the final bill.

## 2. Implementation Details

- Used functions to separate input validation and bill calculation.
- Used `fgets()` and `sscanf()` to read and validate meter readings.
- Used `unsigned long` for electricity unit calculations.
- Handled 16-bit meter rollover using a modulus of 65536.
- Applied the electricity tariff rates:
  - First 100 units: Free
  - 101–200 units: ₹2.25 per unit
  - Above 200 units: ₹4.50 per unit
- Added a fixed charge of ₹50.
- Displayed bill amounts in rupees and paise.

## 3. Testing and Results

| Test | Input (Previous, Current) | Expected Result | Status |
|---|---|---|---|
| Normal consumption | 12000, 13500 | 1500 units; Total ₹6125.00 | Passed |
| Meter rollover | 65000, 100 | 636 units; Total ₹2237.00 | Passed |
| Zero consumption | 12000, 12000 | 0 units; Total ₹50.00 | Passed |
| Invalid lower reading | 20000, 10000 | Invalid rollover message | Passed |
| Non-numeric input | abc | Invalid input message | Passed |
| Out-of-range reading | 70000, 100 | Invalid input message | Passed |
| Tariff calculation | 12000, 12150 | 150 units; Total ₹162.50 | Passed |

## 4. Sample Output

For previous reading 12000 and current reading 12150:

```text
Units consumed: 150
Energy charge: Rs 112.50
Fixed charge: Rs 50.00
Total bill: Rs 162.50
```

## 5. Error Handling

The program checks:
- Whether the input is a valid integer.
- Whether meter readings are between 0 and 65535.
- Whether a lower current reading represents a plausible meter rollover.

Invalid inputs are rejected with appropriate error messages.

## 6. Conclusion

The electricity billing program was successfully implemented and tested using OnlineGDB. All seven test cases produced the expected results. The program correctly calculates electricity consumption, handles meter rollover, validates inputs, and applies the tariff structure.
