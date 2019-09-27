#include "../include/func.h"

int main() {

	Conta conta = Login();

	while (conta.login == 1) {
		while (conta.menu == 1) {
			conta = Menu(conta);
		}
	}

	/* do {
		printf("----Caixa Eletronico----\n");
		printf("Escolha uma das opcoes abaixo:\n");
		printf("01 - Acessar conta\n");
		printf("02 - Sair\n");

		printf("Digite sua opcao: ");
		scanf("%d", &opcao);
		
		switch (opcao) {
			case 1:
				printf("----Bem-vindo a sua conta----\n");
				printf("Escolha uma das opcoes abaixo:\n");
				printf("01 - Verificar saldo\n");
				printf("02 - Saque\n");
				printf("03 - Deposito\n");
				printf("04 - Pagamento\n");
				printf("05 - Sair\n");

				printf("Digite sua opcao: ");
				scanf("%d", &opconta);
				
				switch(opconta){
					case 1:
					printf("Saldo atual: %f \n", saldo);
					break;

					case 2:
					printf("Qual valor deseja sacar? ");
					scanf("%f", &saque);
					if(saque>saldo){
						printf("Saldo insuficiente para realizar esse saque!\n");
					}
					else{
						saldo = saldo-saque;
						printf("Saque realizado com sucesso!\n");
						printf("Saldo atual: %f \n", saldo);
					}
					break;

					case 3:

						printf("Qual valor deseja depositar? ");
						scanf("%f", &deposito);
						saldo = saldo+deposito;
						
						printf("Deposito realizado com sucesso!\n");
						printf("Saldo atual: %f \n", saldo);
					break;

					case 4:
					printf("ja ja\n");
					break;
					
					default:
					printf("Obrigado por usar nossos servicos!\n");
				}
				break;
			case 2:
				printf("Xau\n");
				break;
			default:
				printf("Opcao invalida!\n");
		}
	}while (opcao!=1 && opcao!=2); */

	return 0;
}