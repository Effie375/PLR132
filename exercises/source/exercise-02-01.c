#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 1000; i++)
    {
        sum += i;
    }

    printf("Sum: %d", sum);

    return 0;
}
