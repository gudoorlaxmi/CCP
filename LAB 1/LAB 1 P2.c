PROGRAM-To find whether the entered number is prime or not.

#include <stdio.h>

main() {
  int n, i, c = 0;
  printf("Enter number:");
  scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {
      if (n % i == 0)
      {
         c++;
      }
   }
  if (c == 2) {
  printf("The entered number is a Prime number");
  }
  else {
  printf("The entered number is not a Prime number");
  }
  return 0;
}
