#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int x = 0; x < i; x++)
        {
            printf("*");
        }
        printf("\n");
    }
}
