#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c);

}
void avg(int a,int b,int c)
{
    float average;
    average=(a+b+c)/3.0;
    printf("average=%f",average);
}
