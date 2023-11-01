#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)

#include<stdio.h>

//1求两个正整数m和n的最大公约数


//使用函数的版本
//int Ea(int a, int b)
//{
//	int r1;
//	r1 = a % b;
//	if (r1 == 0)
//	{
//		return b;
//	}
//	else
//		return Ea(b, r1);
//
//}
//int main()
//{
//	int a ,b;
//	printf("请输入两个正整数：");
//	scanf(" %d,%d", &a, &b);
//	int ma = Ea(a, b);
//	printf("%d和%d的最大公约数为：%d", a, b, ma);
//	return 0;
//}


//辗转相除法
//int main() {
//	int a;
//	int b;
//	printf("请输入两个正整数：");
//	scanf("%d %d", &a, &b);
//	int k = 0;
//	while (k = a % b) {
//		a = b;
//		b = k;
//	}
//	printf("最大公约数为:%d\n", b);
//	return 0;
//}

//测试 取模运算  a%b== a-(a div b)*b
//int main()
//{
//	int  a = 2, b = 6;
//	int c = a % b;
//	printf("%d",c);
//	return 0;
//}


//2线性查找

//int main()
//{
//	int key,i;
//	int d = 0;
//	int arr[6] = { 1,2,3,4,5,6 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要查找的值：");
//	scanf("%d",&key);
//	for (i = 0; i < n; i++)
//	{
//		if (key == arr[i])
//		{
//			d = 1;
//			printf("在数组中下标为%d", i);
//		}
//	}
//	if (d == 0)
//	{
//		printf("此数不存在于数组之中");
//	}
//	return 0;
//}




//3插入排序
//int main()
//{
//	int A[10] = { 3,6,2,9,5,7,4,1,7,3 };
//	int n = sizeof(A) / sizeof(A[0]);
//	int i;
//	for (i = 0; i < n-1;i++)//i得<n-1，不然会访问越界
//	{
//		int j,tem;
//		for (j = i; j >= 0; j--)//按下标元素来，j >= 0 才会从下标为0的元素开始排序
//		{
//			tem = A[j + 1];//得提前赋值才能判断，且得借助tem才能进行元素的互换
//			if (tem < A[j])
//			{
//				A[j + 1] = A[j];
//				A[j] = tem;
//			}
//			
//		}
//		
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", A[i]);
//	}
//	return 0;
//}
 
 
//4选择排序

//int main()
//{
//	int A[9] = { 12,6,2,9,5,10,4,1,7 };
//	int n = sizeof(A) / sizeof(A[0]);
//	int i, j, min, max, min_b, max_b, k;
//	for (i = 0; i <= n / 2; i++)
//	{
//		int c = n - i - 1;//n表示数组元素个数，不是下标，所以要减1
//		min = A[i];
//		max = A[c];
//		min_b = i;//用于记录最开始的比较元素
//		max_b = c;
//		for (j = i; j <= c; j++)
//		{
//			if (min > max)//得在一开始 使得min与max比较，这样不会引起一方改变的时候，另一方的值并未引起改变
//			{             // 此种情况发生在最值刚好出现在另一个最值储存空间里 例 最大的9放在了min里面
//				k = min;
//				min = max;
//				max = min;
//			}
//			if (min > A[j])
//			{
//				min = A[j];
//				A[j] = A[min_b];
//				A[min_b] = min;
//			}
//			if (max < A[j])
//			{
//				max = A[j];
//				A[j] = A[max_b];
//				A[max_b] = max;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d   ", A[i]);
//	}
//
//	return 0;
//}
