#include "header.h"

/**
 * printer - output formatter
 * @buf: pointer to the address of the number
 *
 * Return: Always 0 (On Success)
 */
int printer(char *buf)
{
        u_int64_t idx, num;

        num = atoi(buf);

        for (idx = 2; idx < num; idx++)
        {
                if (num % idx == 0)
                {
                        printf("%lu=%lu*%lu\n", num, num / idx, idx);
                        break;
                }
        }

        return (0);
}
