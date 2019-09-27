#include "../include/func.h"

int Close(){
    char r;
    printf("\nTEM CERTEZA DE QUE DESEJA ENCERRAR A APLICAÇÃO (Y/N)? ");
    scanf(" %c", &r);
    if (r == 'Y' || r == 'y') {
        printf("\nAté logo!\n\n");
        return -1;
    } else return 0;
}