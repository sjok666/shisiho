//#include <stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 0; i < 2; i++)
//
//        printf("YES");
//
//    printf("\n");
//}
//#define N 10                 //ѡ������
#include <stdio.h>
//int main()
//{
//	int arr[N + 1] = { 0 }, i, j;
//	printf("������%d��������", N);
//	for (i = 1; i <= N; i++)
//		scanf_s("%d", &arr[i]);
//	for (i = 1; i < N; i++)
//	{
//		int k = i;
//		for (j = 1+ i; j < N; j++)
//			if (arr[j] < arr[k])
//				k = j;
//		if (k != i)
//		{
//			int set = arr[i];
//			arr[i] = arr[k];
//			arr[k] = set;
//		}
//		
//	}
//	printf("������˳��");
//	for (i = 1; i <= N; i++)
//		printf("%d ", arr[i]);
//}
//#define N 10
//int main()                   //���ֲ���
//{
//	int arr[N], left, right,i,mid;
//	printf("������%d������", N);
//	for (i = 0; i < N; i++)
//		scanf_s("%d", &arr[i]);
//	left = 0;
//	right = N - 1;
//
//	int k = 0,flag;
//	printf("��������Ҫ���ҵ���");
//	scanf_s("%d", &k);
//	if (k<arr[0] || k>arr[N - 1])
//		flag = 0;
//	else
//	{
//		
//		while (left<right)
//		{
//			mid = (left + right) / 2;
//			if (k < arr[mid])
//				right = mid - 1;
//			else if (k > arr[mid])
//				left = mid + 1;
//			else
//			{
//				printf("�ҵ���������������±�Ϊ%d", mid);
//				flag = 1;
//				break;
//			}
//		}
//		if (left == right)
//			printf("û�ҵ������");
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	for (i = 1; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//}
     //F9�л��ϵ�
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		printf("%d", i);
	}
	for (i = 1; i < 100; i++)
	{
		printf("%d", 10-i);
	}
}