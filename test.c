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
//	female,//ע�ⶺ��
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
//	printf("�������һ�δ����Ϣ�����:\n");
//	scanf_s("%lf,%d", &r, &n);
//	p1 = 1000 * (1+n*r);
//	printf("p1=%lf\n", p1);
//	printf("������ڶ��δ����Ϣ�����:\n");
//	scanf_s("r2=%lf,n2=%d", &r, &n);
//	p2 = 1000 * (1 + n*r);
//	printf("p2=%lf", p2);
//	return 0;
//}

//int main()
//{
//	int n,input;
//	double p1, p2, r;
//	printf("���ڴ���밴1����һ���Ƚ���\n");
//	printf("���ڴ���밴2����һ�����\n");
//	scanf_s("%d",& input);
//	if (input == 1)
//	{
//		printf("��������������Ϣ\n");
//		scanf_s("%d,%lf", &n, &r);
//		p1 = 1000 * pow(1 + r/4, 4.0 * n);//��������ǿռ䲻�����ɽ�����int ����ת��Ϊdouble��float���ͣ�����Ϊ�������ȡһλ
//		printf("p=%lf\n", p1);
//	}
//	else if (input == 2)
//	{
//		printf("�������������Ϣ\n");
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
//	printf("�������������������\n");
//	scanf_s("%d,%d,%lf", &d, &p, &r);//δ��ʼ����û��ȡ��ַ
//	m = log(p / (p - d * r)) / log(1 + r);
//	printf("ʣ�� %0.2lf  �¿ɻ���", m);
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
//	printf("Բ�ܳ�=%lf\n,Բ���=%lf\n,Բ������=%lf\n,Բ�����=%lf\n,Բ�����=%lf\n", a1, a2, a3, a4, a5);
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

////��ɸѡ����100���ڵ�����
//#include<stdio.h>
//int main()
//{
//	int i, j, k = 0;
//
//	// ���������ÿ��Ԫ������Ϊ��1~100
//	int	a[100];
//	for (i = 0; i < 100; i++)
//		a[i] = i + 1;
//
//	// ��Ϊ1������������a[0]��0���
//	// ���һ��λ��������100��100�������������ѭ��������ѭ��һ��
//	a[0] = 0;
//	for (i = 0; i < 99; i++)
//	{
//		// ��a[i]λ�õ�����ȥģiλ��֮�����������
//		// ����ܹ�������һ��������������λ��������0���
//		for (j = i + 1; j < 100; j++)
//		{
//			if (a[i] != 0 && a[j] != 0)
//			{
//				//�Ѳ��������Ķ���ֵΪ0
//				if (a[j] % a[i] == 0)
//					a[j] = 0;
//			}
//		}
//	}
//
//	printf(" ɸѡ�����100���ڵ�����Ϊ��\n");
//	for (i = 0; i < 100; i++)
//	{
//		//�����в�Ϊ0������Ϊ����
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
//	// ���ԭ����
//	printf("����ǰ����������Ϊ��");
//	for (int i = 0; i < size; ++i)
//		printf("%d ", array[i]);
//	printf("\n");
//
//	// ѡ��������̣�
//	// ��ѭ������ѡ����������ܹ�ѡ��size-1�ˣ�
//	// ��1����Ϊ���һ��ѡ��������ʣ��һ��Ԫ�أ�����ѡ����Ժ���
//	for (int i = 0; i < size - 1; ++i)
//	{
//		// ��maxPos���[0, size-i)���������Ԫ��
//		// �ڸ���ѡ��û�п�ʼǰ��Ĭ����Ϊ0��λ�þ������Ԫ��
//		int maxPos = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			// ��������[0, size-i)��Ԫ�أ������Ԫ�ر�maxPosλ��Ԫ�ش�maxPos��¼��Ԫ��λ��
//			if (array[j] > array[maxPos])
//				maxPos = j;
//		}
//
//		// ������Ԫ�ز�������ĩβʱ�������Ԫ��������ĩβԪ�ؽ���
//		if (maxPos != size - i - 1)
//		{
//			int temp = array[maxPos];
//			array[maxPos] = array[size - i - 1];
//			array[size - i - 1] = temp;
//		}
//	}
//
//	// ���ԭ����
//	printf("ѡ�����������������Ϊ��");
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
//	printf("������5����\n");
//	for (i = 0; i < n; i++)
//		scanf_("%d", &L->data[i]);
//	L->length = n;
//}
//void PrintList(SeqList* L)
//{
//	int i;
//	printf("��ӡ���\n");
//	for (i = 0; i < L->length; i++)
//		printf("%d", L->data[i]);
//	printf("\n");
//}
//void LocateList(SeqList* L, int x)
//{
//	int i;
//	printf_("������һ����\n", x);
//	scanf_("%d", &x);
//	for (i = 0; i < L->length; i++)
//	{
//		if (x == L->data[i])
//		{
//			printf("λ��%d\n", i + 1);
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
//�ݹ鳣������stackoverflow
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
//	//�ݹ�
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