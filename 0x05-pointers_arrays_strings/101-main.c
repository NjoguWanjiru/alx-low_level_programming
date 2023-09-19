#include "main.h"
#include <stdio.h>

int main(void)
{
    char *password = generate_password();
    printf("%s\n", password);
    free(password); 
    return (0);
}

