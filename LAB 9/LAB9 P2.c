PROGRAM- Illustrate pointers in swapping two numbers.

#include <stdio.h>

int main()
{
   int n1, n2, *a, *b, temp;

   printf("Enter the two numbers:\n");
   scanf("%d%d", &n1, &n2);

   printf("Before Swapping\nn1 = %d\nn2 = %d\n", n1, n2);

   a = &n1;
   b = &n2;

   temp = *b;
   *b = *a;
   *a = temp;

   printf("After Swapping\nn1 = %d\nn2 = %d\n", n1, n2);

   return 0;
}
