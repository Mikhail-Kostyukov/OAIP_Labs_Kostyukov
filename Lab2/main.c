#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#define MAX_LENGTH 50
#define MIN_LENGTH 2

int main()
{
	int i;
    int sum = 0;;
	int array[MAX_LENGTH];
	int length;
	int check;
	setlocale( LC_ALL,"rus");
	printf("Введите размер массива: ");
	while (!scanf("%d", &length) || (length > MAX_LENGTH) || (length < MIN_LENGTH))
	{ 
		printf("Вы ввели не допустимое значение. \n Введите значение в диапазоне от 2 до 50: ");
		while (getchar() != '\n');
	}
	while (getchar() != '\n');
	for (check = 0; check < length; check++)
	{
		printf("Значение [%d]:", check);
		while (!scanf("%d", &array[check]))
		{
			printf("Ошибка ввода. \n Введите: array[%d]: ", check);
			while (getchar() != '\n');
		}
		while (getchar() != '\n');
	}
	for (check=0;check<length;check++)
	{
		if(check % 2==0)
		sum+=array[check];
	}
	printf("%d", check);
	_getch();
	return 0;
} 
