Compile: `gcc -std=c11 -Wall -Wextra -Wpedantic main.c -o main`  
Run in this directory; enter the number of intervals then each interval's watt-hours and peak flag (`1` means 6 PM–10 PM, `0` otherwise).  
Result: uses `long long` for cumulative watt-hours and paise and reads tariff values at run-time from `tariff.txt`. For a real system, include timestamped intervals, robust configuration parsing, overflow checks, audit logs, and a documented rounding policy.
