#include<stdio.h>
#include<math.h>
//int main()
//{
	//int a,b,sum;
	//a = 123;
	//b = 456;
	//sum = a + b;
	//printf("%d\n", sum);
	//return 0;
//}
 
//int main()
//{
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf_s("%d%d", &num1, &num2);
	//sum = num1 * num2;
	//printf("%d=%d*%d", sum,num1,num2);
	//return 0;
//}

//enum Sex
//{
//	male,
//	female,//注意逗号
//	secret
//};
//int main()
//{
//	printf("%d\n", male);
//	return 0;
//}

//int main()
//{
//	int n;
//	double  p, r;
//	scanf_s("%d,%lf", &n, &r);
//	p = pow(1 + r, n);
//	printf("p=%f", p);
//	return 0;
//}


//int main()
//{
//	int n;
//	double p1,p2, r;
//	printf("请输入第一次存款利息和年份:\n");
//	scanf_s("%lf,%d", &r, &n);
//	p1 = 1000 * (1+n*r);
//	printf("p1=%lf\n", p1);
//	printf("请输入第二次存款利息和年份:\n");
//	scanf_s("r2=%lf,n2=%d", &r, &n);
//	p2 = 1000 * (1 + n*r);
//	printf("p2=%lf", p2);
//	return 0;
//}

//int main()
//{
//	int n,input;
//	double p1, p2, r;
//	printf("活期存款请按1，按一季度结算\n");
//	printf("定期存款请按2，按一年结算\n");
//	scanf_s("%d",& input);
//	if (input == 1)
//	{
//		printf("请输入年数和利息\n");
//		scanf_s("%d,%lf", &n, &r);
//		p1 = 1000 * pow(1 + r/4, 4.0 * n);//算数溢出是空间不够，可将其由int 类型转换为double或float类型，表现为整数后多取一位
//		printf("p=%lf\n", p1);
//	}
//	else if (input == 2)
//	{
//		printf("请输入次数和利息\n");
//		scanf_s("%d,%lf", &n, &r);
//		p2 = 1000 * pow(1 + r, n);
//		printf("p=%lf\n", p2);
//	}
//	return 0;
//}

//int main()
//{
//	int d, p;
//	double m, r;
//	printf("请输入贷款额，还款额，月利率\n");
//	scanf_s("%d,%d,%lf", &d, &p, &r);//未初始化是没有取地址
//	m = log(p / (p - d * r)) / log(1 + r);
//	printf("剩下 %0.2lf  月可还清", m);
//	return 0;
//}

//int main()
//{
//	int c1, c2;
//	c1 = 97;
//	c2 = 98;
//	printf("c1=%c,c2=%c\n", c1, c2);
//	printf("c1=%d,c2=%d\n", c1, c2);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	float x, y;
//	char c1, c2;
//	scanf_s("a=%db=%d", &a, &b);
//	scanf_s("%f%e", &x, &y);
//	scanf_s("%c%c", &c1, &c2);
//	return 0;
//}

//int main()
//{
//	char c1, c2, c3, c4, c5;
//	c1 ='C';
//	c2 = 'h';
//	c3 = 'i';
//	c4 = 'n';
//	c5 = 'a';
//	printf("%c%c%c%c%c%\n", c1+4,c2+4,c3+4,c4+4,c5+4);
//	return 0;
//}

//int main()
//{
//	float r, h;
//	double pi = 3.14, a1, a2, a3, a4, a5;
//	scanf_s("%f,%f", &r, &h);
//	a1 = pi * 2 * r;
//	a2 = pi * pow(r, 2.0);
//	a3 = 4 * pi * pow(r, 2);
//	a4 = (4 / 3) * pi * pow(r, 3);
//	a5 = pi * h * pow(r, 2);
//	printf("圆周长=%lf\n,圆面积=%lf\n,圆球表面积=%lf\n,圆球体积=%lf\n,圆柱体积=%lf\n", a1, a2, a3, a4, a5);
//	return 0;
//}

int main()
{
	int a = 3, b = 4, c = 5;
	int sum1, sum2, sum3, sum4, sum5,x,y;
	sum1 = a + b > c && b == c;
	printf("%d\n", sum1);
	sum2 = a || b + c && b - c;
	printf("%d\n", sum2);
	sum3 = !(a > b) && !c || 1;
	printf("%d\n", sum3);
	sum4 = !(x = a) && (y = b) && 0;
	printf("%d\n", sum4);
	sum5 = !(a + b) + c - 1 && b + c / 2;
	printf("%d\n", sum5);
	return 0;
}

////用筛选法求100以内的素数
//#include<stdio.h>
//int main()
//{
//	int i, j, k = 0;
//
//	// 将数组汇总每个元素设置为：1~100
//	int	a[100];
//	for (i = 0; i < 100; i++)
//		a[i] = i + 1;
//
//	// 因为1不是素数，把a[0]用0标记
//	// 最后一个位置数字是100，100不是素数，因此循环可以少循环一次
//	a[0] = 0;
//	for (i = 0; i < 99; i++)
//	{
//		// 用a[i]位置的数字去模i位置之后的所有数据
//		// 如果能够整除则一定不是素数，该位置数据用0填充
//		for (j = i + 1; j < 100; j++)
//		{
//			if (a[i] != 0 && a[j] != 0)
//			{
//				//把不是素数的都赋值为0
//				if (a[j] % a[i] == 0)
//					a[j] = 0;
//			}
//		}
//	}
//
//	printf(" 筛选法求出100以内的素数为：\n");
//	for (i = 0; i < 100; i++)
//	{
//		//数组中不为0的数即为素数
//		if (a[i] != 0)
//			printf("%3d", a[i]);
//	}
//
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int array[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int size = sizeof(array) / sizeof(array[0]);
//	// 输出原数组
//	printf("排序前数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//
//	// 选择排序过程：
//	// 外循环控制选择的趟数，总共选择size-1趟，
//	// 减1是因为最后一趟选择区间中剩余一个元素，该趟选择可以忽略
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// 用maxPos标记[0, size-i)区间中最大元素
//		// 在该趟选择没有开始前，默认认为0号位置就是最大元素
//		int maxPos = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			// 遍历区间[0, size-i)中元素，如果有元素比maxPos位置元素大，maxPos记录该元素位置
//			if (array[j] > array[maxPos])
//				maxPos = j;
//		}
//
//		// 如果最大元素不在区间末尾时，将最大元素与区间末尾元素交换
//		if (maxPos != size - i - 1)
//		{
//			int temp = array[maxPos];
//			array[maxPos] = array[size - i - 1];
//			array[size - i - 1] = temp;
//		}
//	}
//
//	// 输出原数组
//	printf("选择排序后数组中数据为：");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long d = 2L;
//	int i, sum;
//	printf("%ld", d);
//	for (i = 0; i < 20; i++)
//		printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	int a,b;
//		for (a = 1,b = 1;a <= 100;a++)
//		{
//			if (b >= 10)  break;
//				if (b % 3 == 1)
//				{
//					b += 3; continue;
//				}
//		}
//	printf("%d\n", a);
//}

//int main()
//{
	//int x = -3, y = 1;
	//if (x)y++;
	//y = y + 1;
	//printf("%d\n", y);
	//int a, b = 0;
	//for (a = 1; a <= 10; a++)
	//{
	//	b = b + a;
	//	if (b >= 5)
	//		break;
	//}
	//printf("a=%d\n", a);


	//return 0;
//}

//#define FUG(x)(x+x)
//void main()
//{
//	int s;
//	s = 3 * FUG(3);
//	printf("%d", s);
//}
//

//#include<stdio.h>
//#include<stdlib.h>

//#define ListSize 100
//typedef struct
//{
//	int data[ListSize];
//	int length;
//}SeqList;  

//int main()
//{
//	void CreateList(SeqList * L, int n);
//	void PrintList(SeqList * L);
//	void LocateList(SeqList * L, int x);
//	void InsertList(SeqList * L);
//	SeqList L;
//	int i,x;
//	int n = 5;
//	L.length = 0;
//	//  system("cls");
//	CreateList(&L, n);
//	PrintList(&L);
//	LocateList(&L, x);
//	InsertList(&L);
//	return 0;
//}
//void CreateList(SeqList* L, int n)
//{
//	int i;
//	printf("请输入5个数\n");
//	for (i = 0; i < n; i++)
//		scanf_("%d", &L->data[i]);
//	L->length = n;
//}
//void PrintList(SeqList* L)
//{
//	int i;
//	printf("打印结果\n");
//	for (i = 0; i < L->length; i++)
//		printf("%d", L->data[i]);
//	printf("\n");
//}
//void LocateList(SeqList* L, int x)
//{
//	int i;
//	printf_("请输入一个数\n", x);
//	scanf_("%d", &x);
//	for (i = 0; i < L->length; i++)
//	{
//		if (x == L->data[i])
//		{
//			printf("位置%d\n", i + 1);
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//递归常见错误stackoverflow
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}

//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);//1234
//	//递归
//	print(num);
//}


//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x, y, z;
//	x = y = 1;
//	z = x++, y++, ++y;
//	printf("%d,%d,%d\n", x, y, z);
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void swap(char* x, char* y)
//{
//	char t;
//	t = *x;
//	*x = *y;
//	*y = t;
//}
//int main()
//{
//	char *s1 = "abc", *s2 = "123";
//	swap(s1, s2);
//	printf("%s,%s\n", s1, s2);
//}
//int main()
//{
//	int i ;
//	for (i = 0; i <= 20; i++)
//		printf("%d\n", i);
//	printf("%d", i);
//	return 0;
//}