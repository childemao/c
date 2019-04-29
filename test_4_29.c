//game.h
#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 11
#define COL 11

#define ROWS ROW-2
#define COLS COL-2


void Initarr1(char arr1[ROW][COL], int row,int col, char set);
void Initarr2(char arr2[ROW][COL], int row, int col, char set);
void print1(char arr1[ROW][COL],int rows,int cols);
void print2(char arr2[ROW][COL], int rows, int cols);
void put(char arr2[ROW][COL], int rows, int cols);
//game.c
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Initarr1(char arr1[ROW][COL], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr1[i][j] = set;
		}
	}
}
void Initarr2(char arr2[ROW][COL], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr2[i][j] = set;
		}
	}
}
void print1(char arr1[ROW][COL], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			printf("%c ",arr1[i][j]);
		}
		printf("\n");
	}
}

void print2(char arr2[ROW][COL], int rows, int cols)
{
	printf("------------------\n");
	int i = 0;
	int j = 0;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", arr2[i][j]);
		}
		printf("\n");
	}
}

void put(char arr2[ROW][COL], int rows, int cols)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while (count<11)
	{
        x = rand() % 10;
		y = rand() % 10;
		for (x = 1; x <= rows; x++)
		{
			for (y = 1; y <= cols; y++)
			{
				if (arr2[x][y] == '0'&& arr2[x][y] != '1')
				{
					arr2[x][y] = '1';
					count++;
				}
			
			}
	
		}
		
	}
	
}
//test.c
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void game()
{
	srand((unsigned int)time(NULL));
	char arr1[ROW][COL] = { 0 };//显示*的棋盘
	char arr2[ROW][COL] = { 0 };//含有雷的棋盘
	Initarr1(arr1, ROW, COL,'*');//初始化
	Initarr2(arr2, ROW, COL,'0');
	print1(arr1, ROWS, COLS);//打印棋盘
	print2(arr2, ROWS, COLS);
	put(arr2, ROWS, COLS);//布置雷
	print2(arr2, ROWS, COLS);




}
void menu()
{
	printf("**************************\n");
	printf("********  1.play  ********\n");
	printf("********  0.exit  ********\n");
	printf("**************************\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新输入");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
