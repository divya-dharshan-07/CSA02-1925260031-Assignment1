# Task 12 – Smart Meter Design Challenge

## Objective
To design a smart electricity meter billing system that processes energy readings recorded at 15-minute intervals and calculates electricity charges using a configurable tariff.

## 1. Smart Meter Data Collection
- Each reading represents energy consumed in watt-hours (Wh).
- The system supports up to 35,040 readings per year.
- Each interval is 15 minutes.
- The user enters the energy reading and specifies whether the interval falls during peak hours.

## 2. Peak-Hour Tariff
- Normal hours are charged at the base tariff.
- Peak hours are between 6:00 PM and 10:00 PM.
- Peak-hour consumption receives a 20% additional charge.
- The program uses a peak flag: 0 for normal and 1 for peak.

## 3. Runtime Configurable Tariff
The tariff is stored in `tariff.txt`.

Example:

```text
base_paise_per_kwh=225
peak_multiplier_percent=120
fixed_charge_paise=5000
```

The program reads these values at runtime, allowing tariff changes without modifying the C source code.

## 4. Implementation
The program uses:
- Structures to store tariff details.
- File handling to read tariff configuration.
- Loops to process multiple readings.
- Integer arithmetic in paise to calculate charges.
- Input validation to reject invalid readings and peak flags.

## 5. Testing
Test input:

```text
2
100 0
100 1
```

Expected calculation:
- Normal energy: 100 Wh
- Peak energy: 100 Wh
- Base tariff: 225 paise/kWh
- Peak multiplier: 120%
- Fixed charge: 5000 paise

Expected output:

```text
Total watt-hours: 200
Energy: 50.49 rupees
Peak rule: intervals flagged peak are charged at 120% of base rate.
```

The displayed amount includes the fixed charge.

## 6. Advantages
- Supports a full year's 15-minute readings.
- Allows tariff changes through an external configuration file.
- Applies peak-hour pricing.
- Uses integer arithmetic for financial calculations.
- Validates user input.

## 7. Limitations
- Peak-hour status is entered manually using a 0/1 flag.
- The program is a prototype and does not connect to an actual smart meter.
- A production system should add overflow checks and define a rounding policy.

## Conclusion
The smart meter billing prototype processes 15-minute energy readings, supports configurable tariffs, and applies a 20% premium to readings marked as peak-hour consumption. It demonstrates file handling, structures, loops, input validation, and integer-based billing in C.
