#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    double r, max, min;

    printf("n i gir ");
    scanf("%d", &n);

    srand(time(NULL));

    max = (rand() % 101) / 100.0;
    min = (rand() % 101) / 100.0;

    if (max < min)
    {
        max = min;
    }

    for (i = 1; i <= n; i++)
    {
        r = (rand() % 101) / 100.0;
        printf("%d. sayi: %lf \n", i, r);

        if (r > max)
        {
            max = r;
        }
        if (r < min)
        {
            min = r;
        }
    }

    printf("\n en buyuk: %lf \n", max);
    printf("en kucuk: %lf \n", min);
}
