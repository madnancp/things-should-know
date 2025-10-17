# Steps in C program Compilation

[!Reference](https://www.scaler.com/topics/c/compilation-process-in-c/)

1. Pre-processing
    it will
    - Remove Comments
    - Expand Macros
    - include Files to source file
    - source file will processed as `<filename>.i`

2. Compiling
    - Compile pre-processed file to assembly code using a compiler tool (GCC)
    - Compiled Assembly code store as `<filename>.s`

3. Assembling
    - Here, assembler convert the Assembly code into machine code (binary code)
    - Machine code will store as `<filename>.o` (object file)

4. Linking
    - Linking is the process including lib files into the object file.

