PROGRAM-To find the sum of 'n' natural numbers. 

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }

    printf("Sum of n natural number is: %d", sum);
    return 0;
}
