#include <stdio.h>

int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};
    int *p;

    p = a;
    printf("a[2] = %d\n", a[2]);
    /* Add one line here to make the program print a[2] = 98 */
    *(p + 5) = 98;
    printf("a[2] = %d\n", a[2]);
    return (0);
}
