#include <stdio.h>
//int main()
//{
//    
//
//    
//
//     static  char  a[3];
//
//     scanf("%s", a);
//
//     printf("%c%c", a[1], a[2]);
//
//   
//}
//int main()
//{
//	char a[] = "This is a program";
//	printf("%.5s", a);
//
//}
#include <stdio.h> 

//int main()
//
//{
//
//    int i, j, m, s, k, a[100];
//
//    for (i = 1; i <= 1000; i++)
//
//    {
//
//        m = i; s = 0; k = 0;
//
//        for (j = 1; j < m; j++)
//
//            /***********SPACE***********/
//
//            if (m%j==0)
//
//            {
//
//                s = s + j;
//
//                /***********SPACE***********/
//
//                a[k++] = j;
//
//            }
//
//        if (s != 0 && s == m)
//
//        {
//
//            /***********SPACE***********/
//
//            for (j=0; j < k; j++)
//
//                printf("%4d", a[j]);
//
//            printf(" =%4d\n", i);
//
//        }
//
//    }
//
//}
//main()
//
//{
//
//    int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
//
//    int temp1, temp2, number, end, i, j;
//
//    for (i = 0; i < 10; i++)
//
//        printf("%5d", a[i]);
//
//    printf("\n");
//
//    scanf("%d", &number);
//
//    /***********FOUND***********/
//
//    end = a[9];
//
//    if (number >= end)
//
//        /***********FOUND***********/
//
//        a[10] = number;
//
//    else
//
//    {
//
//        for (i = 0; i < 10; i++)
//
//        {
//
//            /***********FOUND***********/
//
//            if (a[i] > number)
//
//            {
//
//                temp1 = a[i];
//
//                a[i] = number;
//
//                for (j = i + 1; j < 11; j++)
//
//                {
//
//                    temp2 = a[j];
//
//                    a[j] = temp1;
//
//                    temp1 = temp2;
//
//                }
//
//                break;
//
//            }
//
//        }
//
//    }
//
//    for (i = 0; i < 11; i++)
//
//        printf("%6d", a[i]);
//
//}
//main()
//
//{
//
//    static char a[5] = { '*','*','*','*','*' };
//
//    int i, j, k;
//
//    char space = ' ';
//
//    /***********SPACE***********/
//
//    for (i=0; i < 5; i++)
//
//    {
//
//        printf("\n");
//
//        for (j = 1; j <= 3 * i; j++)
//
//            printf("%1c", space);
//
//        /***********SPACE***********/
//
//        for (k = 0; k < 5; k++)
//
//            printf("%3c", a[k]);
//
//    }
//
//    printf("\n");;
//
//}
//int main()
//{
//	char a[3][4] = { "abcd","sjcc","sihc" };
//	int i = 0,j = 0;
//	for (i = 0; i < 3; i++)
//	{
//
//		for(j=0;j<4;j++)
//			printf("%c", a[i][j]);
//		printf("\n");
//	}
//}
//int main()
//{
//	static char str[] = "china";
//	static char str1[5], str2[] = { "china" };
//	str1 = str2;
//}