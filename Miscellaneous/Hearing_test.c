#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int i, c, m=1;
    printf("Hearing Test.\nEnter starting point(Hz): ");
    scanf("%d", &i);
    printf("Press:\n");
    printf("\t+ to increase.\n");
    printf("\t- to decrease.\n");
    printf("\t0 to change 1 Hz.\n");
    printf("\t1 to change 10 Hz.\n");
    printf("\t2 to change 100 Hz.\n");
    printf("\t3 to change 1000 Hz.\n");
    printf("\t4 to change 10000 Hz.\n..\n..\n..\n");
    printf("\tq to quit.\n");
    printf("\nPress any key to start....");
    getch();
    printf("\nFrequency: %d Hz. If you can hear, continue.\n", i);
    Beep(i, 1000);
    while(1) {
        c=getch();
        if(c=='q')  break;
        else if(c=='+')  m=1;
        else if(c=='-')  m=-1;
        else {
                c-='0';
                printf("\n%d\n", c);
                i+=m*pow(10, c);
            printf("\nFrequency: %d Hz. If you can hear, continue.\n", i);
            Beep(i, 1000);
        }
    }
    return 0;
}
