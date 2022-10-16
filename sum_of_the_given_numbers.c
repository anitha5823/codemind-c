#include<stdio.h>
int main()
{
    int n,i,res;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        res=a+b;
        printf("%d
",res);
    }
    return 0;
}