#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,f=0;char ch;
    printf("\t\t\t\t\t\t\t\t\t ***NUMBER GAME***");
    printf("\n\n Welcome to 'NUMBER GAME'.\n RULES: There are three levels in the game:-EASY, MEDIUM, HARD.You can choose as you like.Here is your opponent,'Generator'!");
    printf("\n It will think about a number and you need to guess it.You can choose your level.");
    printf("\n\n Let's START!");
    printf("\n");
    system("pause");
    system("cls");
    printf("\n Hi! I am the Generator. Are you ready?");
    printf("\n");
    system("pause");
    while(1){
    printf("\n Press E for Easy level\n Press M for Medium level\n Press H for Hard level\n Pressa X for Exit:  ");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch){
    case 'E':
    printf("\n\n I have thought about a number between 1 to 9. Now it's your turn. Guess it!");

    for(int i=1;i<=3;i++)
        {
            srand(time(0));
            a=(rand()%8)+1;
            printf("\n Enter Number: ");
            scanf("%d",&b);
            if(a==b)
           { f++;
            goto check;
           }
            printf("\n No, The number is %d not %d",a,b);
        }
        if(f!=0)
        {check:
            printf("\n Congratulations! You have done it!");}
            printf("\n");
            system("pause");

        if(f==0)
        printf("\n Out of moves!Better luck next time.");
        printf("\n");
        system("pause");
        system("cls");
        break;
    case 'M':
    printf("\n\n I have thought about a number between 1 to 20. Now it's your turn. Guess it!");

    for(int i=1;i<=3;i++)
        {
            srand(time(0));
            a=(rand()%19)+1;
            printf("\n Enter Number: ");
             scanf("%d",&b);
            if(a==b)
           { f++;
            goto check1;
           }
            printf("\n No, The number is %d not %d",a,b);
        }
        if(f!=0)
        {check1:
            printf("\n Congratulations! You have done it!");}
            printf("\n");
            system("pause");


        if(f==0)
        printf("\n Out of moves!Better luck next time.");
        printf("\n");
        system("pause");
        system("cls");
        break;
    case 'H':
    printf("\n\n I have thought about a number between 1 to 100. Now it's your turn. Guess it!");

    for(int i=1;i<=3;i++)
        {
            srand(time(0));
            a=(rand()%99)+1;
            printf("\n Enter Number: ");
             scanf("%d",&b);
           if(a==b)
           { f++;
            goto check2;
           }
            printf("\n No, The number is %d not %d",a,b);
        }
        if(f!=0)
        {check2:
            printf("\n Congratulations! You have done it!");}
            printf("\n");
            system("pause");

        if(f==0)
        printf("\n Out of moves!Better luck next time.");
        printf("\n");
        system("pause");
        system("cls");
         break;
    case 'X':
        printf("\n Press any key to exit!");
        exit(1);
        break;
    default:
        printf("\n Wrong Choice!!!");
        printf("\n");
     system("pause");
    system("cls");
    }
}


return 0;
}
