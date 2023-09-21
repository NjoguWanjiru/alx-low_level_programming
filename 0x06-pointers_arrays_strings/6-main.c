#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    printf("Original string: %s\n", str);

    ptr = cap_string(str);

    printf("Modified string: %s\n", ptr);
    printf("Original string after modification: %s\n", str);

    return (0);
}
