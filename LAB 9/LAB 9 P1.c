PROGRAM-
Develop a C program to perform arithmatic operations
(addition, subtraction, multiplication, division and remainder)on
two integers using pointers.

# include<stdio.h>
int main ()
{
     int n1, n2, *p, *q, sum,diff,multiplication,div,rem;


   printf("Enter two integers:\n");
   scanf("%d%d", &n1, &n2);

   p = &n1;
   q = &n2;

   sum = *p + *q;
   diff= *p - *q;
   multiplication=(*p) * (*q);
   div = (*p)/(*q);
   rem = *p % *q ;

   printf("ADDITION = %d\n", sum);
   printf("SUBTRACTION = %d\n",diff);
   printf("MULTIPLICATION = %d\n",multiplication);
   printf("DIVISION = %d\n",div);
   printf("REMAINDER = %d\n",rem);
   return 0;

}
