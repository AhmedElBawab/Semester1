#include <stdio.h>

/*--------------------------------main function----------------------*/
int main()
{
    char str[256];
    gets(str);
    int i,flag=0,counter =0;
    if(str[0]!=' ' && str[0]!='\t' && str[0]!='\0')
        counter++;
    for(i=0;str[i]!='\0';i++)
    {

        if ( (str[i]==' ' || str[i]=='\t') && (str[i+1]!=' ' && str[i+1]!='\t' && str[i+1]!='\0') )
            counter++;
    }


    printf("%d words",counter);
    return 0;
}
