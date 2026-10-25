Compile: `gcc -std=c11 -Wall -Wextra -Wpedantic main.c -o main`  
Run: `./main` or `main.exe`.  
Result: validates two readings, recognises rollover only when readings are near the register boundary, and computes a paise-based bill. The rollover threshold is an explicit assumption and should be confirmed with the co-operative's meter rules.
