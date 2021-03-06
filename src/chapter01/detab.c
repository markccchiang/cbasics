/*
 * Replaces tabs with spaces
 */

// Includes

#include <stdio.h>

// Definitions

#define TABSTOP 4

/* Main */

int main(void) {

    char c;
    int pos = 1;
    int nb;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            for (nb = TABSTOP - (pos - 1) % TABSTOP; nb > 0; nb--, pos++)
                (void)putchar(' ');
        else {
            (void)putchar(c);
            if (c == '\n')
                pos = 1;
            else
                pos++;
        }
    }

    return 0;
}
