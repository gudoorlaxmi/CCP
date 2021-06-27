#include<stdio.h>
int main()
{
    int d=0;
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int x=n;
    while(x!=0)
    {
        d+=x%10;
         x=x/10;
    }
    printf("the sum of the digit is=%d",d);
    return 0;
}





