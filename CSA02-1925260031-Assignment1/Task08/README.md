Run each command from this folder:  
`gcc -E main.c -o main.i` (preprocess)  
`gcc -S main.c -o main.s` (assembly)  
`gcc -c main.c -o main.o` (object file)  
`gcc main.o -o main` (link)  
`./main` or `main.exe` (run).  
Result: produces evidence for each stage. Use `-Wall -Wextra -Wpedantic` for warnings.
