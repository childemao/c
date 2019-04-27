#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//void DigitSum1(int n)
//{
//	if (n>0)
//	{
//		DigitSum1(n / 10);
//		printf("%d ", n % 10);
//
//	}
//}
//
//int  DigitSum(int n)
//{
//	if (n < 9)
//	{
//		return n;
//	}
//	else
//		
//		return n % 10 + DigitSum(n / 10);
//}
//int main()
//{
//	
//	int n = 0;
//	scanf_s("%d", &n);
//    DigitSum1(n);
//	int ret=DigitSum(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}

//
//void reverse_string(char* n)
//{
//	if (*n != '\0')
//	{
//		reverse_string(n + 1);
//		printf("%c ", *n);
//	}
//}
//
//int main()
//{ 
//	char n[5]="abc";
//	//scanf("%s", n);
//	reverse_string(n);
//	system("pause");
//    return 0;
//
//}
//
//int git(n)
//{
//	if (n > 1)
//	{
//		return n * git(n - 1);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	sum=git(n);
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

//int giu(int n)
//{
//	int i = 0;
//	int a = 1;
//	for (i = 1; i <= n; i++)
//	{
//		a = a * i;
//	}
//	return a;
//}
//
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//	sum=giu(n);
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}


void print(int n)
{
	if (n > 0)
	{
		print(n / 10);
		printf("%d ", n % 10);
	}

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}
