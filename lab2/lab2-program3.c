#include<stdio.h>
int main()
{
  int x;
  int y;
  printf("enter a number");
  scanf("%d",&x);
  y=x%10;
  printf("digit in ones place=%d",y);
  return 0;
}
