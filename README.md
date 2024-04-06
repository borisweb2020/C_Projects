# The **C** Programming Language Review

## Introduction to C:
- `helloWorld.c` - receives a string of characters, checks that the ones are not numbers. The `scanf()` function for inputting data in console and validating the input data
- `arithmetic.c` - receives two integers via *stdin*, checks for the input data for integers and execute arithmetic operations
- `max.c` - receives two integers via *stdin*, checks for the input data for integers by using `getchar()` and outputs the maximum value
- `function.c` - receives one floating-point number, checks for the input data so the program only receives numbers and displays the result of calculating a function, which has `pow()` math function, implicit and explicit type conversion
- `input_char.c` - keyboard input and console output of a single character. Cleaning the buffer from the inputted character '\n'
- `input_string.c` - keyboard input and console output of strings
- `float_compare.c` - demonstrates how to print floating-point variables in exponential format, how the compiler performs implicit type conversion to a single type, and how data can be explicitly converted to the required type

## Basic control structures, recursive, table:
- `prime_divisor.c` - finds the largest prime divisor of any predetermined integer, by using division and the operation of taking the remainder of the division
- `prime_divisor_multi.c` - calculates the largest prime divisor of any predetermined integer, WITHOUT using division and the operation of taking the remainder of the division and by using addition and multiplication
- `prime_divisor_subtract.c` - calculates the largest prime divisor of any predetermined integer, WITHOUT using division and the operation of taking the remainder of the division and by using only subtraction
- `sum_sequence.c` - finds the sum of the sequence `S = 1/2 - 2/4 + 3/8 - 4/16 + ...`
- `factorial.c` - finds the factorial using and without using a recursive algorithm
- `fibonacci.c` - finds a number from the Fibonacci sequence by using dynamic programming with top-down and bottom-up aproaches
- `random.c` - generates a random value
- `char_decode.c` - takes operation mode (0 - encoding / 1 - decoding) as a command-line parameter and accepts characters separated by a space and outputs encoded or decoded characters. A line break character is a sign of the end of the input. The encoded numbers are represented in hexadecimal

## String Functions:
- `strcat.c` - changes the file name by using the `strcat()` function
- `strchr.c` - changes the character '\n' to '\0' if it needed by using the `strchr()` function
- `strcmp.c` - takes a password and in case of success finds the total amount of digits in the string
- `strcpy.c` - copies the characters of the string in reverse order to add the new string between two original ones
- `strlen.c` - reviews the `strlen()` function
