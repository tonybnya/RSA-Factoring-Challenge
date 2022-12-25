#include "header.h"

/**
 * printer - output formatter
 * @n: the given number
 *
 * Return: no return, output: n=p*q
 */
void printer(int n)
{
        int idx, p = 0, q = 0;

        for (idx = 2; idx <= n / 2; ++idx)
        {
                if (n % idx == 0)
                {
                        q = idx;
                        p = n / q;
                        break;
                }
        }

        printf("%d=%d*%d\n", n, p, q);
}
