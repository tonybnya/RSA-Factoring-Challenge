#include "header.h"

/**
 * rsa - output formatter
 * @buf: pointer to the address of the number
 *
 * Return: Always 0 (On Success)
 */
int main(int argc, char *argv[])
{
        char *buf = NULL;
        size_t counter;
        ssize_t line;
        FILE *file;
        uint64_t idx, n, p = 0, q = 0;
        int flag = 0;

        if (argc != 2)
        {
                fprintf(stderr, "Usage: ./rsa <filename>");
                exit(EXIT_FAILURE);
        }

        file = fopen(argv[1], "r");
        if (file == NULL)
        {
                fprintf(stderr, "Error: can't open file '%s'.\n", argv[1]);
                exit(EXIT_FAILURE);
        }

        while ((line = getline(&buf, &counter, file)) != -1)
        {
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
        }

        printf("%llu=%llu*%llu\n", n, p, q);

        return (0);
}
