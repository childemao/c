#include<stdio.h>
#include<stdlib.h>
////结构体的使用
//struct stu
//{
//	char name[20];
//	char sex[5];
//	short age;
//	float score;
//
//};
//
//
//
//int main()
//{
//
//		struct stu s = {"zhansan","男",20,98 };
//
//		printf("%s %s %d %f\n", s.name, s.sex, s.age, s.score);
//
//		system("pause");
//
//	return 0;
//}

//
//typedef struct Stu
//{//重新改变结构体名字
//	    char name[20];
//		char sex[5];
//		short age;
//		float score;
// }stu;
//
//int main()
//{
//	stu s= { "zhansan","男",20,98 };
//	printf("%s %s %d %f\n", s.name, s.sex, s.age, s.score);
//	system("pause");
//	return 0;
//}
//struct point
//{
//	int x;
//	int y;
//};
//
//struct stu
//{//结构体中可包含结构体
//	char name[20];
//	char sex[5];
//	short age;
//	float score;
//	int arr[3];
//	struct point p;
//
//};
//int main()
//{
//	struct point p = { 1,2 };
//	struct stu s = { "zhansan","男",20,98,{1,2,3}};
//	printf("%d %d %s %s %d %f %d %d\n", p.x, p.y, s.name, s.sex, s.age, s.score,s.arr[0],s.arr[2]);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;	
//	int e = 4;
//	int* arr[5] = { &a,&b,&c,&d,&e };
//	printf("%d\n", *arr[2]);
//	system("pause");
//	return 0;
//}


int main()
{
	int arr1[4] = { 1,2,3,4};
	int arr2[4] = { 4,5,6,7};
	int arr3[4] = { 7,8,9,10 };
	int* arr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		{
			for (j = 0; j < 4; j++)
			{
				printf("%d", arr[i][j]);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
