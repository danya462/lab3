#include <stdio.h>
#include <locale.h> 
#define      D       2.54  // 1 pulgada = 2,32166 см
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
	puts("введите число");
	scanf("%d", &num);
	puts("введено число ј");
	scanf("%d", &b);
	puts("введено число B");
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

	printf("введите значение дюйма:\n");
	scanf("%d", &dym);
	printf("введите значение испансого дюйма:\n");
	scanf("%d", &pul);
	result1 = D * dym;
	result2 = P * pul;
	printf("%d дюймов Ц это % .1f см\n %d испанских дюймов Ц это % .1f см ",dym, result1, pul,  result2);




}