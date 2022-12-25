#include "header.h"

/**
 * factors - factorize a number into a product of two smaller numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (On Success)
 */
/* int main(void) */
int main(int argc, char *argv[])
{
        char *buf = NULL;
        size_t counter;
        ssize_t line;
        FILE *file;

        if (argc != 2)
        {
                printf("Usage: ./factors [filename]\n");
                exit(EXIT_FAILURE);
        }

        file = fopen(argv[1], "r");
        if (file == NULL)
        {
                printf("Error opening the file.\n");
                exit(EXIT_FAILURE);
        }

        while ((line = getline(&buf, &counter, file)) != -1)
                printer(buf);

        return (0);
}
