# alx-low_level_programming

C-Hello World

## 1. Betty linter 

Used Betty Linter to check for syntax errors noted indentation resulted in errors - (indentation is not recognized by compiler however indentation is important for readability as well as to comply with ASCI Standards)

## 2. C Compiler
- Scripts written are aimed at key basic functions on running GCC compiler. C compilation process is explained [here](https://www.scaler.com/topics/c/compilation-process-in-c/)

- You can find a list of different compilers [here](https://github.com/fffaraz/awesome-cpp)

- Make code executable with gcc on ubuntu

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c c-file.c -o exec_file_name
```

## 3. Format Specifiers in C
Format specifiers define the type of data to be printed on standard output. More info [here](https://www.freecodecamp.org/news/format-specifiers-in-c/)

## 4. Putchar
putchar is a function in the C programming language that writes a single character to the standard output stream, stdout. Its prototype is as follows:
```
int putchar (int character)
```
The character to be printed is fed into the function as an argument, and if the writing is successful, the argument character is returned. 

Print long int using _putchar requires to have recursion to be add those numbers to string as shown [here](https://www.techcrashcourse.com/2016/02/c-program-to-print-long-variable-using-putchar-only.html). Excercises that used this is > ```5-more_numbers.c```

