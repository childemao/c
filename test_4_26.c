#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//
//int is_fib(int input)
//{
//	if (input > 2)
//	{
//		return is_fib(input - 1) +is_fib(input - 2);
//	}
//	return 1;
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int yet=is_fib(input);
//	printf("第%d个斐波那契数是%d\n", input, yet);
//	system("pause");
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>=3)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	//1 1 2 3 5 8 13 21 34 55
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//10
//	ret = fib(n);
//	printf("%d\n", ret);
//	//printf("\ncount = %d\n", count);
//	system("pause");
//
//	return 0;
//
//}

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &i);
//	ret = fib(i);
//		printf("%d", ret);
//	system("pause");
//	return 0;
//
//}
//int mino(int a, int b)
//{	
//	if (b == 0)
//	{
//		return 1;
//	}
//	if (b == 1)
//	{
//		return a;
//	}
//	else
//	{
//		return a*mino(a, b - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = mino(n, k);
//	printf("%d的%d次方是%d\n", n, k, ret);
//	system("pause");
//	return 0;
//}


void byde(int i)
{

	if (i > 9)
	{
		byde(i / 10);
		printf("%d ", i % 10);
	}

	
}

int main()
{
	int i = 0;

	printf("请输出一个数\n");
	scanf("%d", &i);
	byde(i);
	system("pause");
	return 0;

}
