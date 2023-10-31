#include <stdio.h>
void main()
{
    int x, y, i, j, b, a;
    char ch;
    char grid[10][10];
    printf("Please enter initial position: ");
    scanf("%d %d", &x, &y);
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            grid[i][j]=1;
        }
    }
    printf("Please enter the number of blocked cells: ");
    scanf("%d", &b);
    for( ; b>0; b--) {
        printf(">>>> ");
        scanf("%d %d", &i, &j);
        grid[i][j]=0;
    }
    printf("Start commanding:\n");
    while(1)  {
        printf(">>>> ");
        scanf("%c", &ch);
        if(ch=='U')    {
            y--;
            if(grid[x][y]==0)   {
                y++;
            }
        }
        if(ch=='D')    {
            y++;
            if(grid[x][y]==0)   {
                y--;
            }
        }
        if(ch=='L')    {
            x--;
            if(grid[x][y]==0)   {
                x++;
            }
        }
        if(ch=='R')    {
            x++;
            if(grid[x][y]==0)   {
                x--;
            }
        }
        if(ch=='S')    {
            break;
        }
    }
        printf("Final position of the robot is: %d, %d", x, y);
}
