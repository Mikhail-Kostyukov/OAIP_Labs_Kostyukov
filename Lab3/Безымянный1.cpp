#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>


struct Litt 
{
	char simvol[255];
	int size;
	int M;
};

int M1(char *x, int n) 
{
	int M = 0;
	for (int i = 0; i < n; i++) 
	{
		if (x[i] == 'м'|| x[i] =='М' ) 
		{
			M ++;
		}
	}
	return M;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Litt array[10];
	int sizeSTR(char *x)
	for (int i = 0; i < 2 ; i++)
	{
		printf("Введите слово: ");
		scanf("%s", &array[i].simvol);
		array[i].size = sizeSTR(array[i].simvol);
		array[i].M = M1(array[i].simvol, array[i].size);
	}

	int maxCountM = 0;
	for (int i = 0; i < 2 ;)
	{
		
		if (array[i].M > maxCountM )
		{ 
			maxCountM = array[i].M;
		}	
	}	
	printf("Максимально М :%d  \n", maxCountM);
	if (maxCountM != 0) 
	{
		for (int i = 0; i < 2; i++) 
		{
			if (array[i].M == maxCountM) 
			{
				printf("Максимальным количеством букв М :%s \n", array[i].simvol);
			}
		}
	}

	_getch();
	return 0;
}
