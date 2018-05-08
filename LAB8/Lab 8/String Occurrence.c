#include <stdio.h>

/*--------------------------------main function----------------------*/
int main()
{
    char str[256];
    gets(str);
    char word[256];
    gets(word);
    int i=0,j=0,counter=0;
    int in=0;
    for(i=0;str[i]!='\0';i++)
    {
        int flag=0;
        j=0;
        while(word[j]!='\0')
        {
            if (word[j] == str[i])
            {
                if(j==0) in=i;
                j++;i++;
                flag=1;
            }

            else
            {
                if(flag==1)
                    {
                    flag=0;
                    i=in;
                    break;
                    }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
    if(flag==1)
        {
            i=in;
            counter++;
            printf("Occurrence at index %d\n",in);
        }
    }
    printf("Total number of occurrences = %d",counter);
    return 0;
}
