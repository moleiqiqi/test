#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)

#include<stdio.h>

//1������������m��n�����Լ��


//ʹ�ú����İ汾
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
//	printf("������������������");
//	scanf(" %d,%d", &a, &b);
//	int ma = Ea(a, b);
//	printf("%d��%d�����Լ��Ϊ��%d", a, b, ma);
//	return 0;
//}


//շת�����
//int main() {
//	int a;
//	int b;
//	printf("������������������");
//	scanf("%d %d", &a, &b);
//	int k = 0;
//	while (k = a % b) {
//		a = b;
//		b = k;
//	}
//	printf("���Լ��Ϊ:%d\n", b);
//	return 0;
//}

//���� ȡģ����  a%b== a-(a div b)*b
//int main()
//{
//	int  a = 2, b = 6;
//	int c = a % b;
//	printf("%d",c);
//	return 0;
//}


//2���Բ���

//int main()
//{
//	int key,i;
//	int d = 0;
//	int arr[6] = { 1,2,3,4,5,6 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ�ֵ��");
//	scanf("%d",&key);
//	for (i = 0; i < n; i++)
//	{
//		if (key == arr[i])
//		{
//			d = 1;
//			printf("���������±�Ϊ%d", i);
//		}
//	}
//	if (d == 0)
//	{
//		printf("����������������֮��");
//	}
//	return 0;
//}




//3��������
//int main()
//{
//	int A[10] = { 3,6,2,9,5,7,4,1,7,3 };
//	int n = sizeof(A) / sizeof(A[0]);
//	int i;
//	for (i = 0; i < n-1;i++)//i��<n-1����Ȼ�����Խ��
//	{
//		int j,tem;
//		for (j = i; j >= 0; j--)//���±�Ԫ������j >= 0 �Ż���±�Ϊ0��Ԫ�ؿ�ʼ����
//		{
//			tem = A[j + 1];//����ǰ��ֵ�����жϣ��ҵý���tem���ܽ���Ԫ�صĻ���
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
 
 
//4ѡ������

//int main()
//{
//	int A[10] = { 3,6,2,9,5,7,4,1,7,3 };
//	int n = sizeof(A) / sizeof(A[0]);
//	int i, j, min, max,min_b,max_b;
//	for (i = 0; i <= n / 2; i++)
//	{
//		int c = n - i - 1;//n��ʾ����Ԫ�ظ����������±꣬����Ҫ��1
//		min = A[i];
//		max = A[c];
//		min_b = i;//���ڼ�¼�ʼ�ıȽ�Ԫ��
//		max_b = c;
//		for (j = i; j <= c; j++)
//		{
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
//		printf("%d", A[i]);
//	}
//		
//	return 0;
//}
