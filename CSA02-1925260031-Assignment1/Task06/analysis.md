# Task 06 – Read and Print Data Correctly

## 1. Objective
To understand how to read input and display output correctly in C using `scanf()` and `printf()`. This task also demonstrates input validation and correct formatting of electricity bills.

## 2. Format Specifiers

| Data Type | Format Specifier |
|---|---|
| int | `%d` |
| unsigned int | `%u` |
| long | `%ld` |
| long long | `%lld` |
| float | `%f` |
| double (scanf) | `%lf` |
| char | `%c` |
| string | `%s` |

## 3. Input Validation Using scanf()

The return value of `scanf()` is checked to ensure that the required number of values has been read successfully.

For example:

```c
if (scanf("%ld %ld", &previous, &current) != 2) {
    printf("Invalid input!\n");
    return 1;
}
```

If the user enters letters instead of numbers, `scanf()` returns a value less than 2 and the program detects the invalid input.

## 4. Wrong Format Specifier

Using an incorrect format specifier can cause undefined behaviour and incorrect output.

For example, using `%d` to read a `long` value with `scanf()` is incorrect. The correct specifier is `%ld`.

Always match the format specifier with the variable's data type.

## 5. Electricity Bill Formatting

The electricity bill is stored as an integer number of paise to avoid floating-point precision problems.

Example:

```c
long bill = 16250;
printf("Rs %ld.%02ld\n", bill / 100, bill % 100);
```

Output:

```text
Rs 162.50
```

## 6. Comparison: scanf() and fgets() with strtol()

| Feature | scanf() | fgets() + strtol() |
|---|---|---|
| Input method | Reads formatted input | Reads a complete line |
| Validation | Checks return value | Checks conversion and remaining characters |
| Invalid input recovery | Can be difficult | Easier to handle |
| Processing time | O(L) | O(L) |
| Buffer requirement | No user-defined line buffer | Requires a buffer of size B |

`fgets()` reads the complete input line into a buffer. `strtol()` converts the text into a number and allows the program to check whether the input is valid.

For reliable input validation, `fgets()` with `strtol()` is generally safer and more flexible.

## 7. Complexity Analysis

- Time complexity: O(L), where L is the input line length.
- Space complexity: O(B), where B is the input buffer size for the `fgets()` approach.

## 8. Conclusion

This task demonstrates correct format specifiers, input validation, error handling and proper electricity bill formatting. The program successfully handles normal readings, meter rollover, invalid readings and non-numeric input.
