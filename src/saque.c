#include "../include/func.h"

Conta Saque(Conta conta) {
    float saque = 0;
    printf("Digite o valor do saque: ");
    scanf("%f", &saque);
    conta.saldo -= saque;
    conta.contExtrato++;
    conta.extrato[conta.contExtrato] = -saque;
	conta.operacao[conta.contExtrato] = 2;
    if (Saldo(conta) == -1) {
        conta.menu = -1;
        conta.login = -1;
        return conta;
    } else {
        return conta;
    };
};