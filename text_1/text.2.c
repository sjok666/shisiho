//#include <stdio.h>    //电脑自动关机
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//again:
//	printf("你的电脑将在1分钟后关机，如果输入：我是猪 就取消关机\n请输入：");
//	scanf_s("%s\n", input,20);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//}
// 
//#include <stdio.h>
//int main()
//{
//	int a,b,c,d,e ;
//	int sum = 0;
//	printf("请输入四位数：>");
//	scanf_s("%d", &e);
//	a = e / 1000;
//	b = (e - a * 1000) / 100;
//	c = (e - a * 1000 - b * 100) / 10;
//	d = e % 10;
//	sum = a + b + c + d;
//	printf("四位数字分别为:%d %d %d %d \n", a, b, c, d);
//	printf("它们的和为%d\n", sum);
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b, c,d;
//	printf("请输入a,b,c的值：>");
//	scanf_s("%f%f%f", &a, &b, &c);
//	float x1 = 0, x2 = 0;
//	d = b * b - 4 * a * c;
//	if (d < 0)
//		printf("此方程无解\n");
//	else
//	{
//		x1 = (-b + sqrt(d)) / (2 * a);
//		x2 = (-b - sqrt(d)) / (2 * a);
//		printf("方程的解为：x1=%f,x2=%f\n", x1, x2);
//	}
//}



//void Swap(int* pa, int* pb)     //交换两个数
//{
//	int tamp = *pa;
//	*pa = *pb;
//	*pb = tamp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("a = %d,b = %d\n", a, b);
//	Swap(&a,&b);
//	printf("a = %d,b = %d\n", a, b);
//}


//int sushu(int x)         //使用函数判断一个数是否为素数
//{
//	int a = 0;
//	for (a = 2; a < x; a++)  //是素数返回1，不是返回0
//	{
//		if (x % a == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (sushu(i) == 1)
//			printf("%d ", i);
//	}
//}



//int run_year(int x)       //用函数判断1000-2000之间的闰年
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//		
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (run_year(year) == 1)
//			printf("%d ", year);
//	}
//}

//int binary_search(int arr[], int x,int sz)
//{
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);  不行，数组传参传的是第一个数的地址
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	//二分法查找
//	//在一个有序数组中查找具体的某个数，找到了返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了，下标是：%d\n",ret);
//
//}


//void Add(int* p)
//{
//	(*p)++;
//	
//}
//int main()
//{
//	int sum = 0;
//	Add(&sum);
//	printf("%d\n", sum);
//	Add(&sum);
//	printf("%d\n", sum);
//}


//int print(int x)                //递归，输入1234，输出1 2 3 4
//{
//	
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);
//	
//}


//int my_strlen(char *str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)      //不创建临时变量，求字符串长度
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的是第一个元素的地址
//	printf("%d", len);
//}




//int Fib(int n)        //斐波那契数列
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//}

//#include <stdio.h>
//
//void buttle_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//	}
//}
//int main()
//{
//	int arr[] = {4,6,3,7,8,1,9,2,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buttle_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//#include <stdio.h>
//int main()
//{
//	
//}