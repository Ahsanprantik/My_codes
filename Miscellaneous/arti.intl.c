#include <stdio.h>

main()
{
    int i, j;
    printf("Enter the numbers of characters of your name: ");
    scanf("%d", &i);
    char chr[i];
    printf("Enter the charecters of your name one by one pressing enter: \n");
    for(j=0; j<i ; j++)
    {
        scanf("%c", &chr[j]);
    }
    printf("You are: ");
    for(j=0; j<i; j++)
    {
        if(chr[j]=='a')
        {
            printf("ajob, ");
        }
        else if(chr[j]=='b')
        {
            printf("bolod, ");
        }
        else if(chr[j]=='c')
        {
            printf("chor, ");
        }
        else if(chr[j]=='d')
        {
            printf("don, ");
        }
        else if(chr[j]=='e')
        {
            printf("erresponsible, ");
        }
        else if(chr[j]=='f')
        {
            printf("faltu, ");
        }
        else if(chr[j]=='g')
        {
            printf("gadha, ");
        }
        else if(chr[j]=='h')
        {
            printf("horror, ");
        }
        else if(chr[j]=='i')
        {
            printf("intelligent, ");
        }
        else if(chr[j]=='j')
        {
            printf("joker, ");
        }
        else if(chr[j]=='k')
        {
            printf("keen, ");
        }
        else if(chr[j]=='l')
        {
            printf("litterate, ");
        }
        else if(chr[j]=='m')
        {
            printf("monkey, ");
        }
        else if(chr[j]=='n')
        {
            printf("numb, ");
        }
        else if(chr[j]=='o')
        {
            printf("ox, ");
        }
        else if(chr[j]=='p')
        {
            printf("philosopher, ");
        }
        else if(chr[j]=='q')
        {
            printf("quickest, ");
        }
        else if(chr[j]=='r')
        {
            printf("rockz, ");
        }
        else if(chr[j]=='s')
        {
            printf("sagol, ");
        }

        else if(chr[j]=='t')
        {
            printf("tought, ");
        }
        else if(chr[j]=='u')
        {
            printf("ugly, ");
        }
        else if(chr[j]=='v')
        {
            printf("vandal, ");
        }
        else if(chr[j]=='w')
        {
            printf("weired, ");
        }
        else if(chr[j]=='x')
        {
            printf("exess, ");
        }
        else if(chr[j]=='y')
        {
            printf("yellow dog, ");
        }
        else if(chr[j]=='z')
        {
            printf("zombie, ");
        }
    }
}
