//#include <stdio.h>
//int main()
//{
//	int i = 1,ret=1,n;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = i * ret;
//		
//	}
//		printf("%d\n", ret);
//}
//int main()
//{
//	int i = 0, ret = 1, sum = 0,n=0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <=n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int i = 1, ret = 1, sum = 0;
//	for(i = 1;i <= 10;i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0,k=7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//		else
//			printf("�Ҳ���\n");
//	}
//	
//}
//int main()//���ַ�
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�е��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//}
//int main()
//{
//	int x= 3,y=3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			
//			printf("second");
//			break;
//			
//		default:
//			printf("hellow");
//		}
//	case 2:
//		printf("world");
//
//	}
//}



//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "000000000000000000000";
//	int left = 0/*, right = sizeof(arr1) / sizeof(arr1[0])-2*/;
//	int right = strlen(arr2) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//}

//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	char password[20] = "0";
//	/*printf("���������룺");
//	scanf_s("%s", password, 20);*/
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf_s("%s", password, 20);
//		system("cls");
//		if (strcmp(password, "1234560") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//			
//		}
//
//	}
//	system("cls");
//	if (i == 3)
//		printf("�˻�������\n");
//}







//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; y = 0; x++, y++)
//		y++;
//}



//#include <string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//
//
//
//int main()
//{
//	struct Book b1 = { "C���Գ���ṹ",55 };
//	strcpy_s(b1.name,"C++");
//	b1.price = 15;
//	printf("%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//
//}

//int main()
//{
//	int a = 7;
//	if (a%2==0)
//		printf("a��ż��\n");
//	else
//		printf("a������\n");
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf_s("%s", password,20);//�������벢�����password������
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	/*getchar();*/
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if(ret == 'Y')
//
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//}
//int main()
/*{*//*
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);

	}
}*/
//int main()
//{
//	int j = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		/*printf("hehe\n");*/
//		for (int j = 0; j < 10; j++)
//		{
//			printf("heeh\n");
//		}
//	}
//
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c= b;
//		b = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//		if (i % 3 == 0)
//			printf("%d\n", i);
//}
//int main()//�����Լ��
//{
//	int m = 0, n = 0, r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (m% n != 0)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//}
//#include <math.h>
//int main()      //��100-200֮���ж��ٸ�����
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//}
//int main()    //��1-100֮�京�ж��ٸ�9
//{
//	int i = 0,count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count= %d", count);
//}
//int main()    //��1/1-1/2+1/3....-1/100=
//{
//	int i = 1,flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//}
//int main()    //��10�����е����ֵ
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//}
/*int main()
{
	int i = 0;
	
	for (i = 1; i <= 9; i++)
	{
		//ȷ��һ��
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);
		}
		printf("\n");
	}
	
}*/
//#include <stdio.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("************************\n");
//	printf("***  1. play   0.exit***\n");
//	printf("************************\n");
//}
////RAND_MAX 0-32767
//void game()
//{
//	//int ret = 0;
//	//srand(1);
//	//��ʱ��������������������ʼ
//	int ret = rand()%100+1;
//	int guess = 0;
//	//printf("%d\n", ret);
//	//printf("������\n");
//	while (1)
//	{
//		printf("������֣�>\n");
//		scanf_s("%d", &guess, 10);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d", &input,100);
//		//printf("��1������Ϸ");
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	//system("cls");
//	return 0;
//}

//#include <stdio.h>
//int mian()
//{
//	int  y = 10;
//
//	while (y--);
//
//	printf("y=%d\n", y);
//	return 0;
//}