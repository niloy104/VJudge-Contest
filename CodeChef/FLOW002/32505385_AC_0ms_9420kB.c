#include <stdio.h>
int main()
{
    int t, a, b, rem;
    ;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        rem = a % b;
        printf("%d\n", rem);
    }

    return 0;
}