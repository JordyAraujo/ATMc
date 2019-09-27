#include "../include/func.h"

Conta Extrato(Conta conta){
    printf("\n");
    int size = sizeof(conta.extrato) / sizeof(int);
    for (int i = 0; i < size; i++) {
        int operacaoInt = conta.operacao[i];
        int extratoInt = conta.extrato[i];
        if (operacaoInt == 0 || extratoInt == 0) {
            if (Saldo(conta) == -1) {
                conta.menu = -1;
                conta.login = -1;
                return conta;
            } else {
                return conta;
            };
        } else {
            printf("%.2f - ", conta.extrato[i]);
            switch (operacaoInt) {
            case 1:
                printf("Depósito\n");
                break;

            case 2:
                printf("Saque\n");
                break;

            case 3:
                printf("Pagamento\n");
                break;
            
            default:
                break;
            };
        };        
    };
};