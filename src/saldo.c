#include "../include/func.h"

int Saldo(Conta conta) {
    char s;
    printf("-------------------------------------------------------------------------------\n");
    printf("|                                                                             |\n");
    printf("|  *************************  SEU SALDO ATUAL É:  **************************  |\n");
    printf("|                                  R$%.2f                                  |\n", conta.saldo);
    printf("|                                                                             |\n");
    printf("-------------------------------------------------------------------------------\n\n");
    printf("Deseja fazer uma nova transação (Y/N)?\n\n");
    scanf(" %c", &s);
    if (s == 'Y' || s == 'y'){
        return 0;
    } else {
        printf("\nAté logo!\n\n");
        return -1;
    }
}