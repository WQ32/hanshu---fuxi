#include <stdio.h>

////�Զ��庯��
////�ҳ����������е����ֵ
//
//int getMax(x,y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("������������: >");
//	scanf("%d%d", &num1, &num2);
//	int max = getMax(num1, num2);
//	printf("�����������ֵmax=%d\n", max);
//	return 0;
//}

//// дһ���������Խ����������α���������
//
//int swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������>");
//	scanf("%d%d", &num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);
//	swap(&num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);
//	return 0;
//
//}

////�����Ĳ���
////ʵ�ʲ�����ʵ�Σ������������������ʽ������
////��ʽ�������βΣ�������������ɺ���Զ�������
////
//// дһ���������Խ����������α���������
//
//void swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//void swap2(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������>");
//	scanf("%d%d", &num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);     
//	// 13 45
//	swap2(num1, num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);     
//	// 13 45 (��ֵ���ں����н����ˣ����ֱ�������)
//	swap(&num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);     
//	// 45 13 ������ַ�����ڴ��н�ֵ�����ˣ�
//	return 0;
//	// �β�ʵ����֮����ʵ�൱��ʵ�ε�һ����ʱ����
//}

//// 1. дһ�����������ж�һ�����ǲ���������
//
//int Isprime(int* pn)
//{
//	if (*pn % 2 == 0)
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������>");
//	scanf("%d", &num);
//	int ret = Isprime(&num);
//	if (ret == -1)
//	{
//		printf("%d������������\n", num);
//	}
//	else
//	{
//		printf("%d������!\n", num);
//	}
//	return 0;
//}

//// 2. дһ�������ж�һ���ǲ������ꡣ
//#include <string.h>
//
//void Isrunnian(int* py)
//{
//	if (((*py) % 400 == 0) || (((*py) % 4 == 0) && ((*py) % 100 == 0)))
//	{
//		printf("%d�����꣡", *py);
//	}
//	else
//	{
//		printf("%d�������ꡭ��", *py);
//	}
//}
//int main()
//{
//	int year = 0;
//	int input = 1;
//	do
//	{
//		printf("****  1.�ж� *******  0.�˳� ****\n");
//		printf("������ѡ��: >");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("���������ж��Ƿ����������ݣ�>");
//			scanf("%d", &year);
//			Isrunnian(&year);
//			break;
//		case 0:
//			printf("�˳����򡭡�\n");
//			break;
//		default:
//			printf("������󡭡�\n");
//			break;
//		}
//		printf("\n");
//	} while (input);
//	return 0;
//}

////3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//
//void Halffind(int* arr,int* pf,int size)
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int tmp = (left + right) / 2;
//		if (arr[tmp] < *pf)
//		{
//			left = tmp+1;
//		}
//		else if (arr[tmp] > *pf)
//		{
//			right = tmp-1;
//		}
//		else
//		{
//			printf("�ҵ�%d�ˣ�\n",*pf);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("δ�ҵ�%d\n", *pf);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = 0;
//	int a_size = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ���: >");
//	scanf("%d", &num);
//	Halffind(arr, &num,a_size);
//	return 0;
//}
//
////4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//
//int Addone(int* num)
//{
//	(*num)++;
//	return num;
//}
//int main()
//{
//	int num = 0;
//	printf("������һ��ֵ: >");
//	scanf("%d", &num);
//	int input = 0;
//	//���ú�����ʹ��Numÿ������1
//	do
//	{
//		printf("****  1.��1���� *******  0.�˳� ****\n");
//		printf("������ѡ��: >");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Addone(&num);
//			break;
//		case 0:
//			printf("�˳����򡭡�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ�񡭡�\n");
//			break;
//		}
//	} while (input);
//	printf("���ս����num = %d\n", &num);
//	return 0;
//}

// ������Ƕ�׵��ú���ʽ����

//// Ƕ�׵���
//
//
//void one_line()
//{
//	printf("�Ǻǡ���\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		one_line();
//	}
//}
//// ��������Ƕ�׵��ã���������Ƕ�׶���
//
//int main()
//{
//	three_line();
//	return 0;
//}

////��ʽ����  - ��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//#include <string.h>
////int main()
////{
////	char arr[10] = "abcdef";
////	int ret = 0;
////	ret = strlen(strcat(arr, "bit"));   // ��strcat(ƴ���ַ���)�ķ���ֵ��Ϊstrlen�Ĳ���
////	printf("%d\n", ret);
////	return 0;
////}
//
////int main()
////{
////	printf("%d", printf("%d", printf("%d", 43)));
////	//��� 4321
////	//ע�⣺printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
////	return 0;
////}

//// ����������    - ������������ʹ�� - һ����ͷ�ļ�
//// �����Ķ���    - �����ľ���ʵ�֣����������Ĺ���ʵ��
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);  // ����� 1 2 3 4
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

////��д��������������ʱ���������ַ����ĳ���
//
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char* p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

//// ��n�Ľ׳�
////// �ݹ�
////
////int factorial(int num)
////{
////	if (num <= 1)
////	{
////		return 1;
////	}
////	else
////	{
////		return num * factorial(num - 1);
////	}
////}
////int main()
////{
////	int num = 0;
////	printf("�����룺>");
////	scanf("%d", &num);
////	printf("%d�Ľ׳�Ϊ��%d",num, factorial(num));
////	return 0;
////}
//
//////�ǵݹ鷽��
////int factorial(int num)
////{
////	int result = 1;
////	while (num > 1)
////	{
////		result *= num;
////		num -= 1;
////	}
////	return result;
////}
////int main()
////{
////	int num = 0;
////	printf("�����룺>");
////	scanf("%d", &num);
////	printf("%d�Ľ׳�Ϊ��%d", num, factorial(num));
////	return 0;
////}


 //int main()
 //{
 //	printf("hehe\n");
 //	main();
 //	return 0;
 //}   //��ѭ������


////��쳲���������
//
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//		printf("%d ", c);
//	}
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	Fib(num);
//	
//	return 0;
//}