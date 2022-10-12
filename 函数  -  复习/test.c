#include <stdio.h>

////自定义函数
////找出两个整数中的最大值
//
//int getMax(x,y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数: >");
//	scanf("%d%d", &num1, &num2);
//	int max = getMax(num1, num2);
//	printf("两个数的最大值max=%d\n", max);
//	return 0;
//}

//// 写一个函数可以交换两个整形变量的内容
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
//	printf("请输入两个数：>");
//	scanf("%d%d", &num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);
//	swap(&num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);
//	return 0;
//
//}

////函数的参数
////实际参数（实参）：常量，变量，表达式，函数
////形式参数（形参）：函数调用完成后就自动销毁了
////
//// 写一个函数可以交换两个整形变量的内容
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
//	printf("请输入两个数：>");
//	scanf("%d%d", &num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);     
//	// 13 45
//	swap2(num1, num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);     
//	// 13 45 (传值，在函数中交换了，但又被销毁了)
//	swap(&num1, &num2);
//	printf("num1 = %d ,num = %d\n", num1, num2);     
//	// 45 13 （传地址，在内存中将值交换了）
//	return 0;
//	// 形参实例化之后其实相当于实参的一份临时拷贝
//}

//// 1. 写一个函数可以判断一个数是不是素数。
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
//	printf("请输入一个数：>");
//	scanf("%d", &num);
//	int ret = Isprime(&num);
//	if (ret == -1)
//	{
//		printf("%d不是素数……\n", num);
//	}
//	else
//	{
//		printf("%d是素数!\n", num);
//	}
//	return 0;
//}

//// 2. 写一个函数判断一年是不是闰年。
//#include <string.h>
//
//void Isrunnian(int* py)
//{
//	if (((*py) % 400 == 0) || (((*py) % 4 == 0) && ((*py) % 100 == 0)))
//	{
//		printf("%d是闰年！", *py);
//	}
//	else
//	{
//		printf("%d不是闰年……", *py);
//	}
//}
//int main()
//{
//	int year = 0;
//	int input = 1;
//	do
//	{
//		printf("****  1.判断 *******  0.退出 ****\n");
//		printf("请输入选择: >");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入想判断是否是闰年的年份：>");
//			scanf("%d", &year);
//			Isrunnian(&year);
//			break;
//		case 0:
//			printf("退出程序……\n");
//			break;
//		default:
//			printf("输入错误……\n");
//			break;
//		}
//		printf("\n");
//	} while (input);
//	return 0;
//}

////3. 写一个函数，实现一个整形有序数组的二分查找。
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
//			printf("找到%d了！\n",*pf);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("未找到%d\n", *pf);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = 0;
//	int a_size = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要查找的数: >");
//	scanf("%d", &num);
//	Halffind(arr, &num,a_size);
//	return 0;
//}
//
////4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。
//
//int Addone(int* num)
//{
//	(*num)++;
//	return num;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个值: >");
//	scanf("%d", &num);
//	int input = 0;
//	//调用函数，使得Num每次增加1
//	do
//	{
//		printf("****  1.加1操作 *******  0.退出 ****\n");
//		printf("请输入选择: >");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Addone(&num);
//			break;
//		case 0:
//			printf("退出程序……\n");
//			break;
//		default:
//			printf("选择错误，请重新选择……\n");
//			break;
//		}
//	} while (input);
//	printf("最终结果：num = %d\n", &num);
//	return 0;
//}

// 函数的嵌套调用和链式访问

//// 嵌套调用
//
//
//void one_line()
//{
//	printf("呵呵……\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		one_line();
//	}
//}
//// 函数可以嵌套调用，但不可以嵌套定义
//
//int main()
//{
//	three_line();
//	return 0;
//}

////链式访问  - 把一个函数的返回值作为另外一个函数的参数
//#include <string.h>
////int main()
////{
////	char arr[10] = "abcdef";
////	int ret = 0;
////	ret = strlen(strcat(arr, "bit"));   // 把strcat(拼接字符串)的返回值作为strlen的参数
////	printf("%d\n", ret);
////	return 0;
////}
//
////int main()
////{
////	printf("%d", printf("%d", printf("%d", 43)));
////	//结果 4321
////	//注意：printf函数的返回值是打印在屏幕上字符的个数
////	return 0;
////}

//// 函数的声明    - 函数先声明后使用 - 一般在头文件
//// 函数的定义    - 函数的具体实现，交代函数的功能实现
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);  // 结果： 1 2 3 4
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

////编写函数不允许创建临时变量，求字符串的长度
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

//// 求n的阶乘
////// 递归
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
////	printf("请输入：>");
////	scanf("%d", &num);
////	printf("%d的阶乘为：%d",num, factorial(num));
////	return 0;
////}
//
//////非递归方法
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
////	printf("请输入：>");
////	scanf("%d", &num);
////	printf("%d的阶乘为：%d", num, factorial(num));
////	return 0;
////}


 //int main()
 //{
 //	printf("hehe\n");
 //	main();
 //	return 0;
 //}   //死循环……


////求斐波那契函数
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