#include<stdio.h>
int main()
{
    int m,n;
    printf("enter the value of m: ");
    scanf("%d",&m);
    printf("enter the value of n: ");
    scanf("%d",&n);
    int i;
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        printf("\n%d",i);
    }
    return 0;
}
