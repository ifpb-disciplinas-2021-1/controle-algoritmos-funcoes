#include <stdio.h>

int somarDoisNumeros(int primeiro, int segundo){
    //variável local (passagem por valor)
   // primeiro e segundo tornam-se locais
   primeiro = 5;
   segundo = 8;
   return primeiro + segundo;
}
int main(){
   int a=7, b=9; //original
   int valor = somarDoisNumeros(a, b);
   printf("> a:%d, b:%d, soma: %d\n", a, b, valor);
   return 0;
}