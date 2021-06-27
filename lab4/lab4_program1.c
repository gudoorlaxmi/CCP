#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2,discriminant,imaginary;
    printf("\n please enter the values of a ,b,c of quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant)/(2*a));
        root2=(-b-sqrt(discriminant)/(2*a));
        printf("\n two distinct real roots exist:root1=%.2f and root2=%.2f",root1,root2);

    }
    else if(discriminant==0)
    {
            root1=root2=-b/(2*a);
            printf("\n two equal and real roots exist:root1=%.2f and root2=%.2f",root1,root2);
    }
    else if(discriminant<0)
    {
        root1=root2=-b/2*a;
        imaginary=sqrt(-discriminant)/2*a;
        printf("\n two distinct complex roots exist:root1=%.2f+%.2f and root2=%.2f-%.2f",root1,imaginary,root2,imaginary);

    }
    return 0;
}




