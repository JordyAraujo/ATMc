#include "../include/func.h"

Conta Menu(Conta conta) {

        printf("\n-------------------------------------------------------------------------------\n");
        printf("|                                                                             |\n");
        printf("|  **********************  BEM VINDO(A) À SUA CONTA  ***********************  |\n");
        printf("|                                                                             |\n");
        printf("-------------------------------------------------------------------------------\n");

    while (conta.menu == 1){

        printf("\nEscolha uma das opções abaixo:\n\n");
        printf("1 - Saldo\n");
        printf("2 - Saque\n");
        printf("3 - Deposito\n");
        printf("4 - Pagamento\n");
        printf("5 - Extrato\n");
        printf("6 - Logout\n");
        printf("7 - Encerrar Aplicação\n");

        char d;
        int operacao = 0;


        printf("\nDigite sua opção: ");
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                if (Saldo(conta) == -1) {
                    conta.menu = -1;
                    conta.login = -1;
                } else {
                    break;
                };
                break;

            case 2:
                conta = Saque(conta);
                break;

            case 3:
                conta = Deposito(conta);
                break;

            case 4:
                conta = Pagamento(conta);
                break;

            case 5:
                Extrato(conta);
                break;

            case 6:
                if (Logout() == -1) {
                    Login();
                    break;
                } else {
                    Menu(conta);
                    break;
                };

            case 7:
                if (Close() == -1) {
                    conta.menu = -1;
                    conta.login = -1;
                } else {
                    Menu(conta);
                };

            default:
                printf("-------------------------------------------------------------------------------\n");
                printf("|                                                                             |\n");
                printf("|  *******************  VALOR INVÁLIDO. TENTE NOVAMENTE  *******************  |\n");
                printf("|                                                                             |\n");
                printf("-------------------------------------------------------------------------------\n\n");
                scanf("%c", &d);
                break;
        };
    };
};