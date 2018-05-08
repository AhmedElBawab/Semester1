#include <stdio.h>

void convert(int number,int base)
{
    if(number >0)
    {
        convert(number/base,base);
        if (number%base <10)
            printf("%d",number%base);
        else
            printf("%c",(number%base)+55);
    }
}

int main()
{
    int number,base;
    printf("number = ");
    scanf("%d",&number);
    printf("base = ");
    scanf("%d",&base);
    convert(number,base);
    return 0;
}
