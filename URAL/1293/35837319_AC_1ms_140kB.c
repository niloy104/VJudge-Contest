#include <stdio.h>
int main()
{
    int n,a, b;
    scanf("%d%d%d",&n,&a,&b);
    int x=a*b;
    int d=n*x;
    int ans=2*d;
    printf("%d\n",ans);
}