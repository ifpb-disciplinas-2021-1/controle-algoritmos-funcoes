 #include <stdio.h>
 //assinatura da função (protótipo)
int somarDoisNumeros (int primeiro, int segundo);

int main(){
    int a=8, b=9;
    int soma = somarDoisNumeros(a, b);
    printf("Soma: %d\n", soma);
    return 0;
}
//declaração da função
int somarDoisNumeros (int primeiro, int segundo){ 
    return primeiro + segundo;
};
