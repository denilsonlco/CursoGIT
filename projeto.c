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

float division(int a, int b)
{
	if(b==0)
	{
		printf("\n Erro! Divisao por zero\n");
		printf(" Digite o segundo numero novamente: ");
		scanf("%d", &b);
		return division(a, b);
	}
	else
	{
		int div_result = a / b;
		return div_result;
	}
}

int main()
{
	int num1, num2;
	printf(" --------- CALCULADORA ---------\n\n");
	printf(" Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf(" Digite o segundo numero: ");
	scanf("%d", &num2);
	/*
	printf("\n *Soma: %d\n", sum(num1, num2));
	printf(" *Subtracao: %d\n", sub(num1, num2));
	printf(" *Multiplicacao: %d\n", mult(num1, num2));
	printf(" *Divisao: %.1f\n", division(num1, num2));
	*/
	printf("\n  ----------------------------------------------------\n");
	printf(" |  Soma  |  Subtracao  |  Multiplicacao  |  Divisao  |\n");
	printf("  ----------------------------------------------------\n");
	printf(" |   %d    |      %d      |        %d       |    %.1f    |\n", sum(num1, num2), sub(num1, num2), mult(num1, num2), division(num1, num2));
	printf("  ----------------------------------------------------\n");
	printf("\n Fim. Obrigado!\n");
	return 0;
}
