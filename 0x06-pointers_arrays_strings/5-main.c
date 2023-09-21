#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    printf("Original string: %s\n", str);

    ptr = string_toupper(str);

    printf("Modified string: %s\n", ptr);
    printf("Original string after modification: %s\n", str);

    return (0);
}
