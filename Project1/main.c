/*
�������� ������ ���������
������������ ������ �1
������� � 6
�������: ��������� ����� � �������� � �������� � �������.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) 
{ 
setlocale (LC_CTYPE, "rus"); 
float ton,centner,gramm;
 printf ("������� ���-�� ����  \n");
 scanf ("%f", &ton);
 centner = ton/10;
 gramm = ton/1e+6;
 printf ("%f ������ \n%f �������� \n", &gramm,&centner, gramm,centner);
 system ("pause");
	return 0;
}
