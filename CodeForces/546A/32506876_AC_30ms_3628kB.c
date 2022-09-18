#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k, n, w, i = 1, tp = 0;
    scanf("%d%d%d", &k, &n, &w);
    while (w--)
    {
        tp = tp + k * i;
        i++;
    }

    if (n > tp)
        printf("0\n");
    else
        printf("%d", abs(tp - n));
    return 0;
}