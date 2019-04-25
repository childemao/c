#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_strlen(char* a)
{
	int count = 0;

	while (*a !='\0')
	{
		count++;
		a++;
	}
	return count;
}
int my_strlen2(char* a)
{
	if (*a != '\0')
		return 1 + my_strlen2(a + 1);
	else
		return 0;
}
int my_strlen3(char* a)
{
	char* start  = a;
	while (*a != '\0')
	{
		a++;
	}
	return a - start;
}


int main()
{
	int i = 0;
	int b = 0;
	int c = 0;
	char arr[10] ="abcdef";
	i = my_strlen(arr);
	b = my_strlen2(arr);
	c = my_strlen3(arr);
    printf("%d\n", i);
	printf("%d\n", b);
	printf("%d\n", c);

	system("pause");

}
