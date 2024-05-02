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
- `char_array_vs_char_pointer.c` - reviews the diffrence between a string stored in a char array compared to a pointer to a string literal: `char s[] = "string";` _**vs**_ `char *s = "string";`

## Pointers:
- `pointer_intro.c` - describes basic pointers concepts: creation, manipulation and pointer arithmetic
- `const_pointer_vs_const_to_pointer.c` - describes the difference between a constant pointer and a pointer to a constant
- `maxmin.c` - finds *max* and *min* out of 3 integer numbers and displays them on the screen
- `squaring.c` - receives an array of integers via *stdin*, squares them and outputs the result to *stdout*
- `stat.c` - receives an array of integers via *stdin*, displays it, calculates and displays on the new line a set of statistical metrics – maximum and minimum, the expected value and variance, assuming that we are dealing with a discrete uniform distribution
- `search.c` - receives an array of integers via *stdin* and find the first occurrence of number that meets the following requirements in that array: even number, equal to or above the expected value, follows the three-sigma rule, does not equal 0. The number it finds must be output to *stdout*. If such number does not exist, the program must output 0. The maximum number of numbers entered is 30

## Sorting Algorithms
- `bubble_sort.c` - sorts an array in ascending order by using **Bubble Sort** method, which works by continually passing through the elements of the array and swapping those that are found to be out of order. *Passing an array to a function by a pointer*
- `selection_sort.c` - sorts an array in ascending order by using **Selection Sort** method, which repeatedly finds the minimum element in the unsorted portion of the array and if necessary swaps it, increasing the protion of the sorted array with each iteration. *Passing an array to a function as the array*
- `insertion_sort.c` - sorts an array in ascending order by using **Insertion Sort** method, which examines each element on the right-hand side of the array from the second element on to the end of the array and the inner loop shifts over elements on the sorted left-hand side of the array until the correct sorted position is found
- `quick_sort_Lomuto.c` - sorts an array of 10 integer elements in ascending order by using **Quicksort** algorithm Lomuto

## Dynamic Memory Allocation
- `sort_no_leak.c` - sorts a dynamically allocated array in ascending order using `calloc()` function. The length of the array is specified in *stdin* prior to inputting the array. **Memory deallocation** is performed in cases of borth correct and incorrect data input. The _valgrind_ utility is used to test the program for memory leak

## Tasks
- `1_find_evens_sum.c` - receives the array's length and an array of integers via *stdin* and outputs in *stdout* the sum of the even elements of the array and the newly elements of the old one, by which the previously calculated sum is divided evenly
- `2_cycle_shift.c` - receives the length of an array, the array and a number by which all elements of the array must rotate to the left or if the value is negative, to the right. The modified array is expected as output in *stdout*
- `3_large_number.c` - returns the result of addition and subtraction of two very large numbers that were passed to the program as input in the form of arrays. Maximum number length: 100 elements of type `int`. The integers entered are decimal digits. If the subtrahend is higher than the minuend, "n/a" is displayed instead of the difference.

| Input | Output |
| ------ | ------ |
| 1 9 4 4 6 7 4 4 0 7 3 7 0 9 5 5 1 6 1<br/>2 9 | 1 9 4 4 6 7 4 4 0 7 3 7 0 9 5 5 1 9 0<br/>1 9 4 4 6 7 4 4 0 7 3 7 0 9 5 5 1 3 2 |
| 0 1 0<br/>0 0 1 | 1 1<br/>9 |
| 1 2 3<br/>2 5 6 | 3 7 9<br/>n/a |

- `4_digits_to_number.c` - receives an array of decimal digits and an integer, converts the array to an integer and the entered integer to decimal digits

| Input | Output |
|:------|:-------|
| 1 2 3 4 5<br/>72546 | 12345<br/>7 2 5 4 6 | 
