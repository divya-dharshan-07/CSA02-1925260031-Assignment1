Compile: `gcc -std=c11 -Wall -Wextra -Wpedantic main.c -o main`  
Preprocessor evidence: `gcc -E main.c > preprocessed.i`.  
Run: `./main` or `main.exe`.  
Note: even parenthesised `MAX_VALUE` may evaluate an argument more than once; avoid side effects such as `MAX_VALUE(i++, j)` and prefer a function.
