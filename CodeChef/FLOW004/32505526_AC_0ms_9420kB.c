#include <stdio.h>
int main()
{
    int t, n, fd, ld;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        ld = n % 10;
        while (n >= 10)
        {
            n = n / 10;
        }
        fd = n;
        int result = fd + ld;
        printf("%d\n", result);
    }

    return 0;
}