
#include <stdio.h>
//int main()
//{
//	int a[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	int i = 0, j = 0;
//	while (i++ < 9)
//		if (a[i] % 2)
//			j += a[i];
//	printf("%d", j);
//}
//int main()
//{
//	int arr[][5] = {1};
//	int arr1[][5] = { };
//}
//int main()
//
//{
//
//    int a[7][7];
//
//    int i, j;
//
//    for (i = 0; i < 7; i++)
//
//    {
//
//        a[i][0] = 1;
//
//        /***********SPACE***********/
//
//        a[i][i]=1;
//
//    }
//
//    for (i = 2; i < 7; i++)
//
//        /***********SPACE***********/
//
//        for (j = 1; j < i ; j++)
//
//            /***********SPACE***********/
//
//            a[i][j] = a[i - 1][j] + a[i-1][j-1];
//
//    for (i = 0; i < 7; i++)
//
//    {
//
//        /***********SPACE***********/
//
//        for (j = 0; j<=i; j++)
//
//            printf("%6d", a[i][j]);
//
//        printf("\n");
//
//    }
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//		printf("%d", i);
//	for (i = 0; i <= 102; i++)
//		printf("%d", i);
//}
//int Add(int x, int y)
//{
//	int c = 0;
//	c = x + y;
//	return c;
//}
//int main()
//{
//	printf("hehe");
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//}
//int main()
//{
//	{
//		int tmp = 1;
//		printf("tmp=%d", tmp);
//
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		arr[i] = 1;
//
//}



//void text2()
//{
//	printf("hehe");
//}
//void text1()
//{
//	text2();
//}
//void text()
//{
//	text1();
//}
//int main()
//{
//	text();
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;   //保存最终结果          
//	int n = 0;
//	int ret = 1;   //保存n的阶数
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//}