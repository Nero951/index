#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int money = 0;
//	printf("请输入金额：\n");
//	scanf("%d", &money);
//	int all = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		all += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", all);
//	return 0;
//}
//int Init(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		arr[i] = 0;
//	}
//	return arr;
//}
//int Print(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	Init(arr);
//	Print(arr);
//	//Reverse(*arr);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void reverse(char* arr)
//{
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	while(left<right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() 
//{
//	char arr[100] = {0};
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<math.h>
//int Calc(int n, int m)
//{
//	int p = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < m; i++)
//	{
//		p += n * pow(10, i);
//		j += p;
//	}
//	return j;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入数字：");
//	scanf("%d%d", &a, &b);
//	int c = Calc(a, b);
//	printf("%d\n", c);
//	return 0;
//}
