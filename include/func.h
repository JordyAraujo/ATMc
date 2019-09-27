#ifndef FUNC_H
#define FUNC_H

#include <stdio.h>

typedef struct conta
{
	float saldo;
    float extrato[60];
    int operacao[60];
    int contExtrato;
    int menu;
    int login;
} Conta;

int Aut(int, int);
Conta Login();
Conta Menu(Conta);
Conta Saque(Conta);
Conta Deposito(Conta);
Conta Pagamento(Conta);
Conta Extrato(Conta);
int Saldo(Conta);
int Close();
int Logout();

#endif
