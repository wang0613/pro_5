//
// Created by wang on 2022/7/28.
//��������Ϸ

#include<stdio.h>
#include<stdlib.h>   //rand()���������ͷ�ļ�
#include <time.h>  //time()������ʱ���
#include <string.h>

void menu() {
    printf("#####��Ϸ######\n");
    printf("####1 play#####\n");
    printf("####0 exit######\n");
    //time_t   time();
    srand((unsigned int)time(NULL)); //�����������ʹ��ʱ�������ǰʱ��-1970-1-1�գ�
}


//ʵ������Ϸ
void game() {
   //1:�������һ����
   //2:���� ���бȽ�
   //3����ʾ ̫�� ����̫С  ��������

   //��ǰ���ú�ʱ���
   int random_int = rand()%100+1; //rand����������ɵ�������0-32,767֮��

    while (1)
    {
        printf("������֣�\n");
        int guess =0;
        scanf("%d",&guess);
        if(guess > random_int)
        {
            printf("̫���ˣ�������\n");
        }else if(guess < random_int)
        {
            printf("̫С�ˣ�������\n");
        }else
        {
            printf("��ϲ�㣬����ˣ�\n");
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
                printf("�˳��ɹ�����");
                break;
            default:
                printf("��������");
                break;
        }
    } while (input);
    return 0;
} */
int main()
{
    char input[20] = {0};
    //shutdown -s -t 60
    //system() ִ��ϵͳ����
    system("shutdown -s -t 60");

again:
    scanf("%s",&input);
    //�Ƚ������ַ��� strcmp
    if(strcmp(input,"������") == 0)
    {
        //ȡ������
        system("shutdown -a");
    }else
    {
        goto again;
    }

}
