#include <stdio.h>

int main() {
	float num1, num2, resultado;
	int operacao;
	int continuar;
	
	do {
	
	printf("Calculadora Simples\n");
	printf("-------------------\n");
	printf("Escolha a operacao:\n");
	printf("1 - Soma (+)\n");
	printf("2 - Subtracao (-)\n");
	printf("3 - Multiplicacao (*)\n");
	printf("4 - Divisao (/)\n");
	printf("Digite o numero da operacao: ");
	scanf("%d", &operacao); //%d significa número inteiro (int) e & é usado para passar o endereço de 'operacao' para o 'scanf'
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	switch (operacao) {
		case 1:
			resultado = num1 + num2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case 4:
			if (num2 != 0) { //verificação para evitar divisões por zero
				resultado = num1 / num2;
				printf("Resultado: %.2f\n", resultado);
			} else {
				printf("Erro: divisao por zero nao permitida!\n");
			}
			break;
		default:
			printf("Operacao invalida!");
	}
	
	printf("\nDeseja fazer outra operacao? (1- Sim / 0 - Nao): ");
	scanf("%d", &continuar);
	
	} while (continuar == 1);
	
	printf("Encerrando a calculadora.\n");
	return 0; // return 0 significa que o programa terminou com sucesso.
}
