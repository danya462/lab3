#include <stdio.h>
#include <locale.h> 
#define      D       2.54  // 1 pulgada = 2,32166 ��
#define      P       2.32
void task1();
void task2();

void main()
{
	setlocale(LC_CTYPE, "RUS");
	task2();

}


void task1()
{

	int num;
	int b;
	puts("������� �����");
	scanf("%d", &num);
	puts("������� ����� �");
	scanf("%d", &b);
	puts("������� ����� B");
	printf("A+B=%d\n", b + num);
	printf("A*B=%d\n", b * num);
	printf("A/B=%d\n", num / b);
	printf("A%B=%d", num % b);

}


void task2()
{
	int dym;
	int pul;
	float result1;
	float result2;

	printf("������� �������� �����:\n");
	scanf("%d", &dym);
	printf("������� �������� ��������� �����:\n");
	scanf("%d", &pul);
	result1 = D * dym;
	result2 = P * pul;
	printf("%d ������ � ��� % .1f ��\n %d ��������� ������ � ��� % .1f �� ",dym, result1, pul,  result2);




}