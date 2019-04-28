//game.h
#define _CRT_SECURE_NO_WARNINGS 1
#pragma 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW  3
#define COL  3


void Initarr(char arr[ROW][COL],int row,int col);
void printarr(char arr[ROW][COL], int row, int col);
void playgameman(char arr[ROW][COL], int row, int col);
void playcomputer(char arr[ROW][COL], int row, int col);
char chekwin(char arr[ROW][COL], int row, int col);
//game.c

#include"game.h"

void playcomputer(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}

	}
}
void playgameman(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家先走\n");
	printf("请输入所要走的座标\n");
	while (1)
	{
		scanf_s("%d%d", &x, &y);
		if (x > 0 && x < 4 && y>0 && y < 4)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
			    break;
		     }
			else
			{
				printf("输入坐标占用，请重新输入\n");
			}
			
	    }
	     else
	     printf("输入坐标错误，请重新输入\n");
	}

}

void printarr(char arr[ROW][COL], int row, int col)
{
	printf(" %c | %c | %c \n", arr[0][0], arr[0][1], arr[0][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n", arr[1][0], arr[1][1], arr[1][2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c \n", arr[2][0], arr[2][1], arr[2][2]);
	
}
void Initarr(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			arr[i][j] = ' ';
	}

}
static int IsFull(char arr[ROW][COL], int row, int col)

{

	int i = 0;

	int j = 0;



	for (i = 0; i < row; i++)

	{

		for (j = 0; j < col; j++)

		{

			if (arr[i][j] == ' ')

				return 0;

		}

	}

	return 1;

}

char chekwin(char arr[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)

	{

		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')

		{

			return arr[i][0];

		}

	}
	for (i = 0; i < col; i++)

	{

		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[2][i] != ' ')

		{

			return arr[0][i];

		}

	}

	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')

	{

		return arr[1][1];

	}

	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')

	{

		return arr[1][1];

	}

	if (IsFull(arr, row, col) == 1)

		return 'Q';//平局


	return 'C';

}
//test.c

#include"game.h"

void game()
{
	char get = '0';
	
	char  arr[ROW][COL] = { 0 };
	//初始化棋盘
	Initarr(arr, ROW, COL);
	//打印棋盘
	printarr(arr, ROW, COL);
	//玩游戏
	//playgameman(arr, ROW, COL);//玩家
	//playcomputer(arr, ROW, COL);//电脑走
	while (1)
	{
		
		playgameman(arr, ROW, COL);
		printarr(arr, ROW, COL);
		//判断输赢
	    get = chekwin(arr, ROW, COL);
		if (get != 'C')
			break;


		playcomputer(arr, ROW, COL);
		printarr(arr, ROW, COL);
	    get = chekwin(arr, ROW, COL);
		if (get != 'C')
			break;
	}
		
		if (get == '*')
		{
			printf("玩家赢\n");
		}
		if (get == '#')
		{
          printf("电脑赢\n");
		}
		else if (get == 'Q')

		{

			printf("平局\n");

		}

	

}
void menu()
{
	printf("******************************\n");
	printf("*******    1.玩游戏    *******\n");
	printf("*******    0. 退出     *******\n");
	printf("******************************\n");

}
void test()
{
	int input = 0;
	
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	
	test();
	system("pause");
	return 0;
}
