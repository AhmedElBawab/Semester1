#include <stdio.h>
#include <stdlib.h>

int main()
{

    double student1,student2,student3,student4,student5,x,y;

    printf("Please Enter The First Student's Grade.\n");
    scanf("%lf", &student1);

    printf("Please Enter The Second Student's Grade.\n");
    scanf("%lf", &student2);

    printf("Please Enter The Third Student's Grade.\n");
    scanf("%lf", &student3);

    printf("Please Enter The Fourth Student's Grade.\n");
    scanf("%lf", &student4);

    printf("Please Enter The Fifth Student's Grade.\n");
    scanf("%lf", &student5);

    x=student1+student2+student3+student4+student5;

    y=x/5;

    printf("The Average Grade is %lf.\n",y);

    return 0;
}

