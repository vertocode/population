#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("Initial population: \n");
    }
    while (n < 9);

    // TODO: Prompt for end size
    int e;
    do
    {
        e = get_int("Final population: \n");
    }
    while (e < n);

    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    while (n < e)
    {
        n = round(n + n/3 - n/4);
        y++;
    }

    // TODO: Print number of years
    printf("Years will take: %i\n", y);
}
