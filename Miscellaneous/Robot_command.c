#include <stdio.h>
void main()
{
    int x, y;
    char ch;
    printf("Please enter initial position: ");
    scanf("%d %d", &x, &y);
    while(1==scanf("%c", &ch))  {
        if(ch=='U')    {
            y--;
        }
        if(ch=='D')    {
            y++;
        }
        if(ch=='L')    {
            x--;
        }
        if(ch=='R')    {
            x++;
        }
        if(ch=='S')    {
            break;
        }
    }
        printf("Final position of the robot is: %d, %d", x, y);
}
