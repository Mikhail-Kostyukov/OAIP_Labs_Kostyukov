/*
Костюков Михаил Денисович
Лабораторная работа №1
Вариант № 6
Задание: перевести тонны в центнеры и выразить в граммах.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{ 
setlocale (LC_CTYPE, "rus"); 
float ton,centner,gramm;
 printf ("Введите кол-во тонн  \n");
 scanf ("%f", &ton);
 centner = ton/10;
 gramm = ton/1e+6;
 printf ("%f Граммы \n%f Центнеры \n", &gramm,&centner, gramm,centner);
 system ("pause");
	return 0;
}
