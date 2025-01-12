# Prime Number Checker

This program is designed to find and display all prime numbers up to a specified upper limit. It uses an efficient method to check for prime numbers by testing divisibility up to the square root of the number.

## Features

- Calculates and displays all prime numbers up to a given limit (default set to 999,999).
- Optimized prime-checking algorithm that avoids checking even numbers (other than 2) and reduces the number of divisions by limiting the check up to the square root of each number.
- Prints the total count of prime numbers found up to the limit.

## How it Works

1. **Prime Check Function** (`isPrime`):
   - This function checks if a given number is prime by:
     - Returning `false` if the number is less than or equal to 1.
     - Returning `true` if the number is 2 (since 2 is prime).
     - Excluding even numbers greater than 2 immediately.
     - Checking divisibility only up to the square root of the number to improve performance.

2. **Main Program**:
   - The program iterates through all integers from 2 up to the given limit and uses the `isPrime` function to determine if each number is prime.
   - It counts the total number of prime numbers and prints each prime number as it is found.
   - Finally, it displays the total count of prime numbers up to the limit.

## Compilation and Execution

### Prerequisites:
- A C compiler (e.g., GCC)

### Steps:

1. **Clone/Download** this repository.
2. **Compile** the program:

   ```bash
   gcc ./main.c -o a.out -lm
Note: The -lm flag is necessary to link the math library (math.h).

3. **Run the program:

./prime_checker

The program will print all prime numbers up to the default limit (999,999).

To change the upper limit, you can either uncomment the input section and use scanf to enter a number, or modify the n variable in the main function directly.
