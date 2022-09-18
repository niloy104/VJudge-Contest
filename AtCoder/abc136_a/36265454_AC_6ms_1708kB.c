#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int x = a - b;
    int y = c - x;
    if (y < 0)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", y);
    }
}