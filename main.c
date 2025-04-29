#include <stdio.h>

void mostrarMenu() {
	
	printf("Calculadora Simples\n");
	printf("-------------------\n");
	printf("Escolha a operacao:\n");
	printf("1 - Soma (+)\n");
	printf("2 - Subtracao (-)\n");
	printf("3 - Multiplicacao (*)\n");
	printf("4 - Divisao (/)\n");
	printf("Digite o numero da operacao: ");	
}
	
float realizarCalculo(int operacao, float num1, float num2){
	float resultado = 0;
	
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
	return resultado;
}
	
int desejaContinuar() {
	int opcao;
	printf("\nDeseja fazer outra operacao? (1- Sim / 0 - Nao): ");
	scanf("%d", &opcao);
	return opcao;
}

int main() {
	float num1, num2;
	int operacao;
	int continuar;
	
	do {
		int entradaValida;
		
		do {
			mostrarMenu();
			entradaValida = scanf ("%d", &operacao);
			
			if(entradaValida != 1 || operacao < 1 || operacao > 4){
				while (getchar() != '\n'); 
				printf("Entrada invalida! Digite um numero de 1 a 4.\n\n");
			}
		} while (entradaValida != 1 || operacao < 1 || operacao > 4);
		
		printf("Digite o primeiro numero: ");
		scanf("%f", &num1);
		printf("Digite o segundo numero: ");
		scanf("%f", &num2);
		
		realizarCalculo(operacao, num1, num2);
		
		continuar = desejaContinuar();
	} while (continuar == 1);
	
	printf("Encerrando a calculadora.\n");
	return 0; // return 0 significa que o programa terminou com sucesso.
}
