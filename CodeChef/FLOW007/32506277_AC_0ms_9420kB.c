#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int rev = 0, rem, i, n;
        scanf("%d", &n);
        while (n != 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }

        printf("%d\n", rev);
    }
    return 0;
}
