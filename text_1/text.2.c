//#include <stdio.h>    //�����Զ��ػ�
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//again:
//	printf("��ĵ��Խ���1���Ӻ�ػ���������룺������ ��ȡ���ػ�\n�����룺");
//	scanf_s("%s\n", input,20);
//	if (strcmp(input, "������") == 0)
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
//	printf("��������λ����>");
//	scanf_s("%d", &e);
//	a = e / 1000;
//	b = (e - a * 1000) / 100;
//	c = (e - a * 1000 - b * 100) / 10;
//	d = e % 10;
//	sum = a + b + c + d;
//	printf("��λ���ֱַ�Ϊ:%d %d %d %d \n", a, b, c, d);
//	printf("���ǵĺ�Ϊ%d\n", sum);
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a, b, c,d;
//	printf("������a,b,c��ֵ��>");
//	scanf_s("%f%f%f", &a, &b, &c);
//	float x1 = 0, x2 = 0;
//	d = b * b - 4 * a * c;
//	if (d < 0)
//		printf("�˷����޽�\n");
//	else
//	{
//		x1 = (-b + sqrt(d)) / (2 * a);
//		x2 = (-b - sqrt(d)) / (2 * a);
//		printf("���̵Ľ�Ϊ��x1=%f,x2=%f\n", x1, x2);
//	}
//}



//void Swap(int* pa, int* pb)     //����������
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


//int sushu(int x)         //ʹ�ú����ж�һ�����Ƿ�Ϊ����
//{
//	int a = 0;
//	for (a = 2; a < x; a++)  //����������1�����Ƿ���0
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



//int run_year(int x)       //�ú����ж�1000-2000֮�������
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
//	//int sz = sizeof(arr) / sizeof(arr[0]);  ���У����鴫�δ����ǵ�һ�����ĵ�ַ
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
//	//���ַ�����
//	//��һ�����������в��Ҿ����ĳ�������ҵ��˷�����������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
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


//int print(int x)                //�ݹ飬����1234�����1 2 3 4
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

//int my_strlen(char* str)      //��������ʱ���������ַ�������
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d", len);
//}




//int Fib(int n)        //쳲���������
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