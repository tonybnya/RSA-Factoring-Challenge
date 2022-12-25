#include "header.h"

/**
 * printer - output formatter
 * @buf: pointer to the address of the number
 *
 * Return: Always 0 (On Success)
 */
int printer(char *buf)
{
        u_int32_t idx, number;

        number = atoi(buf);

        for (idx = 2; idx < number; idx++)
        {
                if (number % idx == 0)
                {
                        printf("%d=%d*%d\n", number, number / idx, idx);
                        break;
                }
        }

        return (0);
}
