Normal compile: `gcc -std=c11 -Wall -Wextra -Wpedantic main.c billing.c -o main`  
Debug compile: `gcc -std=c11 -Wall -Wextra -Wpedantic -DDEBUG main.c billing.c -o main`  
Run: `./main` or `main.exe`.  
Result: the header provides guarded declarations/macros; DEBUG output appears only when compiled with `-DDEBUG`.
