#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int x, y;
//	for (x=0,y=0;x<2 && y<5;++x,y++)
//	{
//		printf("hehe\n");
//
//	}
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		printf("hehe");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			//continue;
//			//break;
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i < 10);
//	return 0;
//}
//计算n的阶乘
//计算1-10的阶乘的和
//int main()
//{
//	int n = 0;
//	//scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	/*for (n = 0; n < 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i < n; i++)
//		{
//			ret = ret * i;
//		}
//		
//	}
//	sum = sum + ret;*/
//	//优化,求3的阶乘，永2的阶乘乘以3，以此类推
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//	}
//	/*while (i <= n)
//	{
//		
//		ret = ret * i;
//		i++;
//	}*/
//	printf("n的阶乘=%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：\n");
//	scanf("%s", input);
//	printf("请确认密码(Y/N) ->");
//	//清空缓存区
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}
//int mian()
//{
//
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int cout = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9 || a % 9 == 11)
//		
//			cout++;
//	
//	}	printf("9的个数为：%d\n", cout);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0,13,34,66,24,54,29,15,52,9};
//	//printf("请输入十个数字：\n");
//	//scanf("%d", arr);
//	int a = 0;
//	int temp = 0;
//	while (a < 9)
//	{
//		if (arr[a] > arr[a + 1])
//		{
//			temp = arr[a + 1];
//			arr[a + 1] = arr[a];
//			arr[a] = temp;	
//		}
//		a++;
//	}printf("%d\n", arr[9]);
//	return 0;
//}
int A(int arr[])
{
	int a = 0;
	for (a=0;a <= 9;a++)
	{
		;
	}printf("\n", arr);
	return A;
}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int mul = 0;
//	int arr = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j=1;j <= 9;j++)
//		{
//			
//			mul = i * j;
//			
//			arr = A(mul);
//		}printf("%d*%d=%d",i,j, arr);
//	}
//	
//	return 0;
//}
//int leap_year(int a)
//{
//	/*if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//		return 1;*/
//	return((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//}
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (leap_year(i) == 1)
//		{
//			printf("闰年:%d\n",i);
//		}
//	}
//	return 0;
//}