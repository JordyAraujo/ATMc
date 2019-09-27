#include "../include/func.h"

int Logout(){
    char r;
    printf("\nTEM CERTEZA DE QUE DESEJA SAIR (Y/N)? ");
    scanf(" %c", &r);
    if (r == 'Y' || r == 'y') {
        printf("\nAté logo!\n\n");
        return -1;
    } else return 0;
}