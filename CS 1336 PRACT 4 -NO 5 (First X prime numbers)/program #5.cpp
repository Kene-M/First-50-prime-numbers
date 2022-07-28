/*

    This program will use functions to find and display the first 50 prime numbers.


1. Call the function for displaying prime numbers, passing 50(amount of prime numbers) as the argument.
2. In the function:  {
        for (Check if the amount of prime numbers displayed is up to 50)
            if (Check the number is prime by calling the function that checks it, pass the current number as an argument) {
                In the function:  {
                    Assign the value '2' to the divisor.
                    for (Check if the divisor not reached the number being checked)  {
                        If (Check if the number is divisible by any value between 2 and itself (excluded))
                            if the number being checked is not prime, return "false" to the calling function.
                        Increment the divisor in each loop iteration.
                    end for
                    If the number being checked is prime, return "true" to the calling function.
                end function

                Increment the prime number counter.
            end if

            Increment the current number being checked in each loop iteration.
        end for.

*/


// This program will use functions to find and display the first 50 prime numbers.

#include <iostream>
#include <iomanip>

using namespace std;

bool isPrime(int); // Function prototype for checking if a number is prime.
void printPrimeNumbers(int);  // Function prototype for displaying prime numbers.

    // Main function.
int main()
{
        // Display the heading prompt.
    cout << "The list of the first 50 prime numbers are as follows:" << endl << endl;

        // Call the function for displaying prime numbers, passing 50(amount of prime numbers) as the argument.
    printPrimeNumbers(50);

  return 0;
}

`   // Function for checking if a number is prime.
bool isPrime(int number)
{
        // Check if the divisor not reached the number.
    for (int divisor = 2; divisor < number; divisor++)
    {
            // Check if the number is divisible by any value between 2 and itself (excluded).
        if (number % divisor == 0)
        {
                // If the number being checked is not prime, return "false" to the calling function.
            return false;
        }
    }

        // If the number being checked is prime, return "true" to the calling function.
    return true;
}

    // Function for displaying prime numbers.
void printPrimeNumbers(int numberOfPrimes)
{
        // Declare constants.
    const int PRIMES_DISPLAYED_PER_LINE = 10; // To hold the amount of prime numbers to be displayed in a line.

        // Declare variables.
    int primeCount = 0; // The hold the current count of prime numbers.
    int number = 2; // To hold the number to be tested for primeness.

        // Check if the amount of prime numbers displayed is up to 50.
    for (; primeCount < numberOfPrimes; number++)
    {
            // Check the number is prime by calling the function that checks it.
        if (isPrime(number))
        {
                // Increment the prime number counter.
            primeCount++;

                // Check if the number of prime numbers displayed is a multiple of 10.
            if (primeCount % PRIMES_DISPLAYED_PER_LINE == 0)
            {
                // Print the prime number and advance to a new line.
                cout << setw(5) << number << endl;
            }

                // Check if the number of prime numbers displayed is not a multiple of 10.
            else
            {
                    // Print the prime number and advance to a new line.
                cout << setw(5) << number;
            }
        }
    }
}

/*

    RUN:

The list of the first 50 prime numbers are as follows:

    2    3    5    7   11   13   17   19   23   29
   31   37   41   43   47   53   59   61   67   71
   73   79   83   89   97  101  103  107  109  113
  127  131  137  139  149  151  157  163  167  173
  179  181  191  193  197  199  211  223  227  229

*/
