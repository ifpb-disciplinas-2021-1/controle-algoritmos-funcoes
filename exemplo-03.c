 #include <stdio.h>
int somarDoisNumeros (int primeiro, int segundo){ 
    int resposta; // variável local definida na função somarDoisNumeros
    resposta = primeiro + segundo;
    // a + b;
    return resposta;
};
//função
int main(){
    int a=8, b=8; // variável local definida na função main
    int soma = somarDoisNumeros(a, b);
    if(soma % 2 ==0){
        int numero = soma + 10; // variável local definida no bloco if
        printf("Soma com número: %d\n", numero);
    }
    printf("Soma: %d\n", soma);
    return 0; //SUCESSO
}
