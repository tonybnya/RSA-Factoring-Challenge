#include "header.h"

/**
 * isPrime - check if a number is a prime of not
 * @number: the given number
 *
 * Return: true if the number is prime, otherwise false.
 */
int isPrime(int number)
{
        int idx, flag = 1;

        if (number == 0 || number == 1)
                flag = 0;

        for (idx = 2; idx <= number / 2; ++idx)
        {
                if (number % idx == 0)
                {
                        flag = 0;
                        break;
                }
        }

        return (flag);
}
