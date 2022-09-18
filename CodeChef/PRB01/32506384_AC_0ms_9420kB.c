#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, count = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}