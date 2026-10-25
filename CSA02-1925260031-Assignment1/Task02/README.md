Compile: `gcc -std=c11 -Wall -Wextra -Wpedantic main.c -o main`  
Run: `./main` or `main.exe`.  
Expected on a platform where `unsigned short` is 2 bytes and 16-bit: 330 units and rollover 256 units. Check `USHRT_MAX` on your system.
