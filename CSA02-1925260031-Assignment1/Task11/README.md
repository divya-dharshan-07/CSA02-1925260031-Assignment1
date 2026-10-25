Compile: `gcc -std=c11 -Wall -Wextra -Wpedantic main.c -o main`  
Run from this directory and enter a non-negative integer. `tariff.txt` stores `slab1 slab2 rate1_paise rate2_paise rate3_paise fixed_paise`.  
Result: tariff values are read at start-up, so approved tariff changes do not require recompiling. Production code should validate file bounds and use overflow-safe arithmetic.
