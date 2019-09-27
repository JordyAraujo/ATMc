#include "../include/func.h"

Conta Pagamento(Conta conta) {
    float pagamento = 0;
    int contaPagamento = 0;
    printf("Digite o ID da conta de destino: ");
    scanf("%i", &contaPagamento);
    printf("Digite o valor a pagar: ");
    scanf("%f", &pagamento);
    conta.saldo -= pagamento;
    conta.contExtrato++;
    conta.extrato[conta.contExtrato] = -pagamento;
	conta.operacao[conta.contExtrato] = 3;
    if (Saldo(conta) == -1) {
        conta.menu = -1;
        conta.login = -1;
        return conta;
    } else {
        return conta;
    };
};