#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//timeϵͳʱ��ͷ�ļ� 
void menu()//������Ϸ�˵� 
{
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
}
void playgame()
{
	int magic = rand() % 100 + 1;//���һ��1-100������ 
	int guess;
	int counter = 0;//����������ʼΪ0 
	while (1)
	{
		do {
			printf("���һ�����֣�");//��ʾ�û����в�������Ϸ,����һ������
			scanf("%d", &guess);
			counter++;
			if (guess > magic)//���ݱȽϽ��,��ʾ�û�����,����,���ǲ¶���.
				printf("̫���ˣ�\n");
			else if (guess < magic)
				printf("̫С�ˣ�\n");
			else
				printf("right!\n");
		} while (guess != magic);
		printf("��һ������%d�Σ�������̫���ˣ�\n", counter);
		break;
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(0));//time(0)�õ�����ʱ���,��Ӧͷ�ļ�#include <time.h>
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			playgame();
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("�������\n");
		}
	} while (input);
	return 0;
}