#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    double r,d,c,a;

    printf("Enter The Radius.\n");
    scanf("%lf",&r);

    d=2*r;
    printf(" The Diameter Equals %lf\n",d);

    c=2*r *PI;
    printf(" The Circumference Equals %lf\n",c);

    a=PI*r*r;
    printf("The Area Equals %lf\n",a);
    getchar();
    return 0;
}
