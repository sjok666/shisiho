#include <stdio.h>
int main()
{
	char arr[9][9];
	int i = 0, j = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
			arr[i][j] = ' ';
	}
	for (i = 0; i <5; i++)
	{
		for (j =i; j <i+5; j++)
				arr[2*i][j ] = '*';
		
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
			printf("%c", arr[i][j]);
		printf("\n");
	}
}