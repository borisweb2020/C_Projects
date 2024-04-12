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
- `fibonacci.c` - finds a number from the Fibonacci sequence by using _**dynamic programming**_ with top-down and bottom-up aproaches
- `random.c` - generates a random value
- `char_decode.c` - takes operation mode (0 - encoding / 1 - decoding) as a command-line parameter and accepts characters separated by a space and outputs encoded or decoded characters. A line break character is a sign of the end of the input. The encoded numbers are represented in hexadecimal
- `three_functions` - calculates three functions and displays a table in *data.txt* by using output redirection. The first column contains the values from -&pi; through +&pi; with 42 measurements at this interval. The second, third and fourth ones describe the values of the functions at a point
- `three_functions_print.c` - draws the graphs of the calculated functions in the terminal using the &#42; or &#94; symbols. Scale on the X-axis – 42 markers; scale on the Y-axis – 21

## String Functions:
- `strcat.c` - changes the file name by using the `strcat()` function
- `strchr.c` - changes the character '\n' to '\0' if it needed by using the `strchr()` function
- `strcmp.c` - takes a password and in case of success finds the total amount of digits in the string
- `strcpy.c` - copies the characters of the string in reverse order to add the new string between two original ones
- `strlen.c` - reviews the `strlen()` function

## Pointers:
- `pointer_intro.c` - describes basic pointers concepts: creation, manipulation and pointer arithmetic
- `maxmin.c` - finds *max* and *min* out of 3 integer numbers and displays them on the screen
- `squaring.c` - receives an array of integers via *stdin*, squares them and outputs the result to *stdout*
- `stat.c` - receives an array of integers via *stdin*, displays it, calculates and displays on the new line a set of statistical metrics – maximum and minimum, the expected value and variance, assuming that we are dealing with a discrete uniform distribution
- `search.c` - receives an array of integers via *stdin* and find the first occurrence of number that meets the following requirements in that array: even number, equal to or above the expected value, follows the three-sigma rule, does not equal 0. The number it finds must be output to *stdout*. If such number does not exist, the program must output 0. The maximum number of numbers entered is 30

## Sorting Algorithms
- `bubble_sort.c` - sorts an array in ascending order by using **Bubble Sort** method, which works by continually passing through the elements of the array and swapping those that are found to be out of order
