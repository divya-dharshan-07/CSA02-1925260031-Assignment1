# Task 11 – Final Recommendation

## Objective
To develop a billing program that reads tariff values from an external configuration file instead of hardcoding them into the program.

## Implementation
The program uses `fopen()` to open `tariff.txt` and `fscanf()` to read the tariff configuration.

The configuration contains:
- First slab limit
- Second slab limit
- First slab rate
- Second slab rate
- Third slab rate
- Fixed charge

The program validates the configuration and checks whether the user enters valid electricity units.

## Tariff Configuration
The `tariff.txt` file contains:

```text
100 200 0 225 450 5000
```

All tariff rates and the fixed charge are stored in paise.

## Advantages
1. Tariff values can be changed without modifying the C source code.
2. Invalid configuration data is detected.
3. User input is validated.
4. Integer paise calculations avoid floating-point rounding issues in financial calculations.
5. The program is easier to maintain and update.

## Limitations
The program depends on the availability of a valid `tariff.txt` file. More extensive checks could also be added for extremely large input values.

## Final Recommendation
Using an external tariff configuration file is a flexible and maintainable approach for electricity billing. It allows tariff changes without recompiling the program and makes the billing system easier to manage.
