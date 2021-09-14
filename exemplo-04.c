 #include <stdio.h>
int resposta; // variável global 
int somarDoisNumeros (int primeiro, int segundo){     
    resposta = primeiro + segundo;
    return resposta;
};
int main(){
    int a=8, b=8; // variável local definida na função main
    int soma = somarDoisNumeros(a, b);
    printf("Soma: %d\n", soma);
    printf("Resposta: %d\n", resposta);
    return 0; 
}
