#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //Getting sentece
    char sen[256]={0};
    gets(sen);


    int no_words=0;
    int i;


    for(i=0;i<strlen(sen)-1;i++){
        if(sen[i]==' '||sen[i]=='\t'){
            if(sen[i+1]!=' '&&sen[i+1]!='\t'){
                no_words++;
            }else{
                continue;
            }
        }
    }
    if(sen[0]!=' '&&sen[0]!='\t'){
        no_words++;
    }


    printf("%d words",no_words);




    return 0;
}
