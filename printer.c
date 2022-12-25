#include "header.h"

/**
 * printer - output formatter
 * @buf: pointer to the address of the number
 *
 * Return: no return, output: n=p*q
 */
void printer(char *buf)
{
        u_int32_t idx, n, p = 0, q = 0;

        n = atoi(buf);

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
