#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <unistd.h>

int main()
{
    // WELCOME
    int i;
    char welcome[]="WELCOME TO";
    printf("\t\t\t\t");
    for(i=0;i<10;i++){
        printf("%c",welcome[i]);
        Sleep( 250 );
    }
    printf("\n");
    printf("\t\t\t\t");
    for(i=0;i<10;i++){
        printf("-");
        Sleep( 100 );
    }

    //CHANGING BACK GROUND COLOR
    system("COLOR 1c");
    printf("\n\n\n");

    printf("   ******************************************************************\n"
                "   *                                                                *\n"
                "   *                   ::      :: : ::  :  :::::                    *\n"
                "   *                   : :    : : : : : :  :                        *\n"
                "   *                   :  :  :  : : :  ::  :::::                    *\n"
                "   *                   :    :   : : :   :  :                        *\n"
                "   *                   :        : : :   :  :::::                    *\n"
                "   *                                                                *\n"
                "   *    :::::: :         :  ::::: :::::  ::::::  :::::   ::::::     *\n"
                "   *    :      :    :    :  :     :      :    :  :       ::    :    *\n"
                "   *    ::::::  :  : :  :   ::::  :::::  ::::::  :::::   ::::::     *\n"
                "   *         :   ::   ::    :     :      :       :       :: ::      *\n"
                "   *    ::::::    :   :     ::::: :::::  :       :::::   ::   ::    *\n"
                "   *                                                                *\n"
                "   ******************************************************************\n");



       Sleep( 600 );
       system("COLOR fc");
       Sleep( 200 );
       system("COLOR 1c");
       Sleep( 600 );
       system("COLOR ec");
       Sleep( 200 );
       system("COLOR 1c");




    //Please
    printf("\n\n\n");
    printf("\t\t\t") ;
    char l[]="-PLEASE PRESS ENTER TO CONTINUE\n-";
    for(i=0;i<32;i++){
        printf("%c",l[i]) ;
        Sleep( 50 );
    }
    printf("\t\t\t");
    for(i=0;i<32;i++){
        printf("-");
        Sleep( 30 );
    }


    //condition
    int c;
    c=getchar();
    while (c != '\n')
    {
        printf("-PLEASE PRESS ENTER TO CONTINUE:\N") ;
        c=getchar();
    }

    //clear screen
    system("cls");

    //main menu
    printf("\t\t") ;
    char M[]="* PLEASE PRESS ENTER NUMBER OF YOUR CHOISE 1-2-3 *\n-";
    for(i=0;i<50;i++){
        printf("%c",M[i]) ;
        Sleep( 50 );
    }
    printf("\n");
    printf("\t\t");
    for(i=0;i<50;i++){
        printf("-");
        Sleep( 30 );
    }

    //NEW GAME
    printf("\n\n\n");
    printf("\t\t\t\t") ;
    char N[]="1)NEW GAME\n-";
    for(i=0;i<10;i++){
        printf("%c",N[i]) ;
        Sleep( 50 );
    }
    //LOAD GAME
    printf("\n");
    printf("\t\t\t\t") ;
    char G[]="2)LOAD GAME\n-";
    for(i=0;i<11;i++){
        printf("%c",G[i]) ;
        Sleep( 50 );
    }
    //SCORE BOARD
    printf("\n");
    printf("\t\t\t\t") ;
    char S[]="3)SCORE BOARD\n-";
    for(i=0;i<13;i++){
        printf("%c",S[i]) ;
        Sleep( 50 );
    }
    printf("\n\n\n");










    return 0;
}
