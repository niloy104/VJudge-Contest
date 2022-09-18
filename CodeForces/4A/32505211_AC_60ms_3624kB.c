#include <stdio.h>
int main()
{
    int n, d;
    scanf("%d", &n);
    d = n - 2;
    if (d % 2 == 0 && n > 2)
        printf("YES");
    else
        printf("NO");
    return 0;
}