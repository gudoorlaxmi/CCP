PROGRAM-Find the largest of two numbers.

#include <stdio.h>

int main()
 {
    int a, b;
    printf(" Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("%d is Largest\n", a);
    }
    else if (b > a)
    {
        printf("%d is Largest\n", b);
    }
    else
    {
	printf("Both are Equal\n");
    }

    return 0;
}
