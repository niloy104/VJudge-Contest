#include <stdio.h>
int main()
{
    long long int ar[5], max, min, i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%lld", &ar[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + ar[i];
    }
    max = ar[0];
    min = ar[0];
    for (i = 0; i < 5; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
        if (min > ar[i])
        {
            min = ar[i];
        }
    }
    printf("%lld %lld", sum - max, sum - min);

    return 0;
}
