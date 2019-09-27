#include "../include/func.h"

Conta Login() {
    Conta conta;
    conta.saldo = 1234.56;
    conta.contExtrato = 0;
	conta.extrato[conta.contExtrato] = 1234.56;
	conta.operacao[conta.contExtrato] = 1;
	conta.menu = 1;
	conta.login = 0;
    int IDconta = 0;
    int senha = 0;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n-------------------------------------------------------------------------------\n");
    printf("|                                                                             |\n");
    printf("|  ****************  CAIXA ELETRÔNICO - SEJA BEM VINDO(A)!  ****************  |\n");
    printf("|                                                                             |\n");
    printf("-------------------------------------------------------------------------------\n\n");
    printf("\nPressione Enter para começar...\n");
    getchar();

    while (conta.login == 0) {

        printf("Digite o ID da sua conta: ");
        scanf("%d", &IDconta);
        printf("\nAgora digite sua senha: ");
        scanf("%d", &senha);
        conta.login = Aut(IDconta, senha);
        if (conta.login == 0) {
            printf("\n-------------------------------------------------------------------------------\n");
            printf("|                                                                             |\n");
            printf("|  ******************  Dados inválidos. Tente novamente!  ******************  |\n");
            printf("|                                                                             |\n");
            printf("-------------------------------------------------------------------------------\n\n");
        };
    };
    return conta;
};

	