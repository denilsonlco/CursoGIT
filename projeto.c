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

int main()
{
	int num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Soma: %d\n", sum(num1, num2));
	printf("Subtracao: %d\n", sub(num1, num2));
	printf("Multiplicacao: %d\n", mult(num1, num2));
	return 0;
}
