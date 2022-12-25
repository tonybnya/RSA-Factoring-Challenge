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
        char *line_buf = NULL;
        size_t line_buf_size = 0;
        int line_count = 0;
        unsigned long int n = 0;
        ssize_t line_size;
        FILE *file;

        if (argc != 2)
        {
                printf("Usage: ./factors [filename]\n");
                exit(EXIT_FAILURE);
        }

        file = fopen(argv[1], "r");
        if (!file)
        {
                printf("Error opening the file.\n");
                exit(EXIT_FAILURE);
        }

        line_size = getline(&line_buf, &line_buf_size, file);
        while (line_size >= 0)
        {
                line_count++;
                n = atoi(line_buf);
                printer(n);
                line_size = getline(&line_buf, &line_buf_size, file);
        }

        free(line_buf);
        line_buf = NULL;
        fclose(file);

        return (0);
}
