#include "header.h"

/**
 * rsa - output formatter
 * @buf: pointer to the address of the number
 *
 * Return: Always 0 (On Success)
 */
int rsa(char *buf)
{
        u_int64_t idx, n, p = 0, q = 0;
        int flag = 0;

        n = atoi(buf);

        for (idx = 2; idx <= n / 2; idx++)
        {
                flag = isPrime(idx);
                if ((n % idx == 0) & (flag == 1))
                {
                        q = idx;
                        break;
                }
        }

        for (idx = 2; idx <= n / 2; idx++)
        {
                flag = isPrime(idx);
                if ((n % idx == 0) & (flag == 1) & (idx != q))
                {
                        p = idx;
                        break;
                }
        }

        printf("%lu=%lu*%lu\n", n, p, q);

        return (0);
}
