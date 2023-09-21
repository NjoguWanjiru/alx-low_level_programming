#include "main.h"
#include <stdio.h>

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    printf("Original string: %s\n", s);

    p = leet(s);

    printf("Modified string: %s\n", p);
    printf("Original string after modification: %s\n", s);

    return (0);
}
