#include <stdio.h>

int main()
{
    int i = 1;
    int j = 9;
    for (; i <= j; i++, j--)
    {
        printf("%d     %d\n", i, j);
    }

    printf("end--> %d %d", i, j);
}
