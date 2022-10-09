//
// Created by wang on 2022/7/28.
//猜数字游戏

#include<stdio.h>
#include<stdlib.h>   //rand()函数所需的头文件
#include <time.h>  //time()函数的时间戳
#include <string.h>

void menu() {
    printf("#####游戏######\n");
    printf("####1 play#####\n");
    printf("####0 exit######\n");
    //time_t   time();
    srand((unsigned int)time(NULL)); //设置随机数（使用时间戳：当前时间-1970-1-1日）
}


//实现玩游戏
void game() {
   //1:随机生成一个数
   //2:输入 进行比较
   //3：提示 太大 或者太小  重新输入

   //提前设置好时间戳
   int random_int = rand()%100+1; //rand函数随机生成的数字在0-32,767之间

    while (1)
    {
        printf("请猜数字：\n");
        int guess =0;
        scanf("%d",&guess);
        if(guess > random_int)
        {
            printf("太大了，请重试\n");
        }else if(guess < random_int)
        {
            printf("太小了，请重试\n");
        }else
        {
            printf("恭喜你，答对了！\n");
            break;
        }
    }

}

/*int main() {
    int input = 0;
    do {
        menu();
        scanf("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出成功！！");
                break;
            default:
                printf("输入有误！");
                break;
        }
    } while (input);
    return 0;
} */
int main()
{
    char input[20] = {0};
    //shutdown -s -t 60
    //system() 执行系统命令
    system("shutdown -s -t 60");

again:
    scanf("%s",&input);
    //比较两个字符串 strcmp
    if(strcmp(input,"我是猪") == 0)
    {
        //取消命令
        system("shutdown -a");
    }else
    {
        goto again;
    }

}
