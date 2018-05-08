#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //Getting Senteces
    char sen[256];
    gets(sen);


    //Getting word
    char word[256];
    gets(word);

    //Getting Size Of Senteces And Word
    int size_sen=strlen(sen);
    int size_word=strlen(word);


    int i,k,count=0,array_index[256],index=0;;
    for(i=0;i<size_sen;i++){
        int flag=1;
        if(word[0]==sen[i]){
            for(k=0;k<size_word;k++){
                if(word[k]!=sen[i+k]){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                count++;
                array_index[index]=i;
                index++;
            }
        }
    }

    for(i=0;i<count;i++){
        printf("Occurrence at index %d\n",array_index[i]);
    }

    printf("Total number of occurrences = %d\n",count);


    return 0;
}
