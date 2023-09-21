#include "main.h"
#include <stdio.h>

int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    printf("Original string: %s\n", s);

    p = rot13(s);

    printf("Modified string: %s\n", p);
    printf("------------------------------------\n");
    printf("%s", s);

    return (0);
}
