#include <stdio.h>
#include <stdlib.h>

int main()
{

    float r1,r2,r3;

    printf("Please enter R1:\n");
    scanf("%f",&r1);

    printf("Please enter R2:\n");
    scanf("%f",&r2);

    printf("Please enter R3:\n");
    scanf("%f",&r3);

    printf("The equivalent resistance Req when they are connected in series is %f ohm \n",r1+r2+r3);
    printf("The equivalent resistance Req when they are connected in parallel is %f ohm\n",1/((1/r1)+(1/r2)+(1/r3)));

    getchar();

    return 0;
}
