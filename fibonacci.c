#include<stdio.h>
int main()
{
    int n,i,f1=0,f2=1,f3=0;
    scanf("%d ",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    return 0;
}