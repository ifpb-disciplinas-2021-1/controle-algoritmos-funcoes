 #include <stdio.h>
int somarDoisNumeros (int primeiro, int segundo){ 
    return primeiro + segundo;
};
//função
int main(){
    int a=8, b=9;
    int soma = somarDoisNumeros(a, b);
    printf("Soma: %d\n", soma);
    return 0; //SUCESSO
}
