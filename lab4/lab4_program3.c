#include<stdio.h>
int main()
{
    int n,i,s;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        s=n*i;
        if(s>=1 && s<=100)
        printf("\n%d",s);
    }
    return 0;
}
