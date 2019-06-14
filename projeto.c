#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
	int sum_result = a + b;
	return sum_result;
}

int sub(int a, int b)
{
	int sub_result = a - b;
	return sub_result;
}

int mult(int a, int b)
{
	int mult_result = a * b;
	return mult_result;
}

int div(int a, int b)
{
	int div_result = a / b;
	return div_result;
}

int main()
{
	int a, b;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	printf("Soma: %d\n", sum(a, b));
	printf("Subtracao: %d\n", sub(a, b));
	printf("Multiplicacao: %d\n", mult(a, b));
	printf("Divisao: %d\n", div(a, b));
	return 0;
}
