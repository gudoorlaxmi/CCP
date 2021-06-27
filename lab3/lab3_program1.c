#include<stdio.h>
#include<math.h>
float areaoftriangle(float,float,float);
main()
{
    float a,b,c,area;
    printf("enter the length of sides of a triangle");
    scanf("%f%f%f",&a,&b,&c);
    area=areaoftriangle(a,b,c);
    printf("area of triangle=%.2f\n",area);
    return 0;

}
float areaoftriangle(float a,float b,float c)
{


float s,area;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
return area;
}
