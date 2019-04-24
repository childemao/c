#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int input = 0;
	int i = 0;
	int j = 0;
	scanf("%d", &input);
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}
	system("pause");
}


void game()
{
	int i = 0;
	int j = 0;
	i = rand() % 100 + 1;
	printf("请输入你要猜的数\n");
	while (1)
	{
		scanf("%d", &j);
		
		if (j < i)
		{
			printf("猜小了\n");
		}
		if (j > i)
		{
			printf("猜大了\n");
		}
		if (j ==i)
		{
			printf("猜对了\n");
			break;
		}
	}
}
void entergame()
{
	int input = 0;
	printf("请选择：>");
	scanf("%d", &input);
	while (input)
	{
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;

		}
	}


}

void menu()
{
	printf("***************************\n");
	printf("*******    1.play   *******\n");
	printf("*******    0.exit   *******\n");
	printf("***************************\n");

}
int main()
{

	menu();
	srand((unsigned int)time(NULL));
	entergame();

	return 0;
}
void game()
{
	printf("玩游戏\n");
}
void menu()
{
	printf("***************************\n");
	printf("*******    1.play   *******\n");
	printf("*******    0.exit   *******\n");
	printf("***************************\n");
}
int main()
{
	
	int input = 0;
	
	do {
		menu();

		printf("请选择;>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;

		}


	} while (input);


	return 0;
}


void change(int *p,int *q)
{
	int tep = 0;
	tep = *p;
	*p = *q;
	*q = tep;
	
int main()
{
	int i = 10;
	int j = 20;
	change(&i,&j);
	printf("%d%d",i, j);
	system("pause");
	return 0;
}


int is_run_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	return 2;
}


int main()
{
	int year = 0;
	int a = 0;
	scanf("%d", &year);
	a = is_run_year(year);
	if (a == 1)
	{
		printf("%d是闰年", year);
	}
	else
	{
		printf("%d不是闰年", year);
	}
	system("pause");
	return 0;

}

int is_su(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n = 0;
	int a = 0;
	scanf("%d", &n);
	a = is_su(n);
	if (a == 1)
	{
		printf("%d是素数", n);
	}
	else
	{
		printf("%d不是素数", n);
	}
	system("pause");
	return 0;
}

void reverse(int arr[], int sz)
{
	int i = 0;
	int tep = 0;
	for (i = 0; i <= sz / 2; i++)
	{
		tep = arr[i];
		arr[i] = arr[sz - i-1];
		arr[sz - i-1] = tep;
	}
	
}

void empty(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[])
{
	int n = 0;
	for (n = 0; n < 9; n++)
	{
		printf("%d", arr[n]);
	}
	printf("\n");
}
void init(int arr[],int sz,int n)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = n;
	}

}
int main()
{
	int n = 0;
	int arr[9] = { 9,8,7,4,6,5,1,2,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print(arr);
	init(arr,sz,n);
	print(arr);
	empty(arr, sz);
	print(arr);
	system("pause");
	return 0;
}

