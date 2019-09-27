#include "../include/func.h"

Conta Deposito(Conta conta) {
    float deposito = 0;
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    conta.saldo += deposito;
    conta.contExtrato++;
    conta.extrato[conta.contExtrato] = deposito;
	conta.operacao[conta.contExtrato] = 1;
    if (Saldo(conta) == -1) {
        conta.menu = -1;
        conta.login = -1;
        return conta;
    } else {
        return conta;
    };
};