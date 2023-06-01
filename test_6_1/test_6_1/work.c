#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&month,&day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//
//	return 0;
//}

//int main()
//{
//	char n = printf("Hello world!Hello world!Hello world!Hello world!Hello world!");
//	printf("\n%c\n", n);
//	return 0;
//}

int main()
{
	int arr[4] = { 0 };
	

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}

	int Max = addsum(arr);
	printf("%d", Max);

	return 0;
}

int addsum(int arr[])
{
	int max = arr[0];
	for (int i = 1; i < 4;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}