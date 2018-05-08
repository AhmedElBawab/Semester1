#include <stdio.h>

struct Fraction{
    int N;
    int d;
}num1,num2,res;

//Functions Prototypes
int GCD(int a,int b);
struct Fraction putOnReducedForm(struct Fraction num);
struct Fraction add(struct Fraction num1, struct Fraction num2);
struct Fraction subtract(struct Fraction num1, struct Fraction num2);
struct Fraction multiply(struct Fraction num1, struct Fraction num2);
struct Fraction devide(struct Fraction num1, struct Fraction num2);

int main()
{
    char op;

    //Read Inputs
    printf("Enter num1.Numerator: ");
    scanf("%d",&num1.N);
    printf("Enter num1.denominator: ");
    scanf("%d",&num1.d);
    printf("Enter num2.Numerator: ");
    scanf("%d",&num2.N);
    printf("Enter num2.denominator: ");
    scanf("%d",&num2.d);

    num1 = putOnReducedForm(num1);
    num2 = putOnReducedForm(num2);

    printf("Enter the required operation (+,-,*,/) : ");
    do{
        op=getchar();
    }while (op=='\n');

    if (op=='+')
        res=putOnReducedForm(add(num1,num2));

    if (op=='-')
        res=putOnReducedForm(subtract(num1,num2));

    if (op=='*')
        res=putOnReducedForm(multiply(num1,num2));

    if (op=='/')
        res=putOnReducedForm(devide(num1,num2));

    //Print Output
    printf("\n%d/%d %c %d/%d = %d/%d",num1.N,num1.d,op,num2.N,num2.d,res.N,res.d);

    return 0;
}


int GCD(int a,int b){
    int gcd;
    if(b!=0)
        gcd=GCD(b,a%b);
    else
        return a;
}

struct Fraction putOnReducedForm(struct Fraction num)
{
    int gcd=GCD(num.N,num.d);
    num.N/=gcd;
    num.d/=gcd;

    return num;
}

struct Fraction add(struct Fraction num1, struct Fraction num2)
{
    struct Fraction res;
    res.N=(num1.N*num2.d)+(num2.N*num1.d);
    res.d=(num1.d*num2.d);

    return res;
}

struct Fraction subtract(struct Fraction num1, struct Fraction num2)
{
    struct Fraction res;
    res.N=(num1.N*num2.d)-(num2.N*num1.d);
    res.d=(num1.d*num2.d);

    return res;
}

struct Fraction multiply(struct Fraction num1, struct Fraction num2)
{
    struct Fraction res;
    res.N=num1.N*num2.N;
    res.d=num1.d*num2.d;

    return res;
}

struct Fraction devide(struct Fraction num1, struct Fraction num2)
{
    struct Fraction res;
    res.N=num1.N*num2.d;
    res.d=num1.d*num2.N;

    return res;
}

