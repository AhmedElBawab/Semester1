#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR FC");
    printf("Welcome to the color changing application!\n");
    printf("Press any key to change the background color!\n");
    getch();
    system("COLOR 1E");
    printf("Now the background color is Yellow and Text Color is light Red\n");
    printf("Press any key to exit...");
    getch();
    return 0;
}

//1E:1---->back,E:font
/*Color Codes:
0 = Black
1 = Blue
2 = Green
3 = Aqua
4 = Red
5 = Purple
6 = Yellow
7 = White
8 = Gray
9 = Light Blue
A = Light Green
B = Light Aqua
C = Light Red
D = Light Purple
E = Light Yellow
F = Bright White
*/
