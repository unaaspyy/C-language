#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("******************************\n");
    printf("*1.play***0.exit**************\n");
    printf("******************************\n");
}
void game()
{
    int ret = 0;
    int guess = 0;
    ret = rand()%100+1;
    while(1)
    {
        printf("请输入你猜测的数字");
        scanf("%d",&guess);  
        if(guess<ret)
        {
            printf("小\n");
        }
        else if(guess>ret)
        {
            printf("大\n");
        }
        else if(guess==ret)
        {
            printf("对了\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    srand((unsigned int) time(NULL));
    do
    {
        menu();
        printf("请输入你的选择\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("请重新选择\n");
                break;
        }
    } while (input);
    return 0;
}