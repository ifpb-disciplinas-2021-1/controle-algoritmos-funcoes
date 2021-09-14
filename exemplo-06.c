#include <stdio.h>
// procedimento
void trocarDoisNumeros(int *primeiro, int *segundo){ //ponteiro
    int auxiliar = *primeiro;
    *primeiro = *segundo;
    *segundo = auxiliar;
}
int main(){
    int a=7, b=8;
    printf("> a:%d, b:%d\n", a, b);
    trocarDoisNumeros(&a, &b); //ponteiro
    printf("> a:%d, b:%d\n", a, b);
    return 0;
}