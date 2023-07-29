#include <stdio.h>
void incrementa (int * ponteiro){ // recebe um ponteiro de inteiro e vai armazenar o endereço de uma variável do tipo inteiro
    (*ponteiro)++; // aqui ele vai fazer o incremento, além disso, o * neste caso faz com que peguemos o valor armazenado no endereço
}
int main(void){
    
    int var = 2; // declaração da variável
    printf("var = %d \n", var); // imprime o valor da variável
    incrementa (&var); // chama a função e ela faz o incremento do valor associado a variável
    printf("var = %d\n", var); // imprime a variável depois de ela ser incrementada
   
    return 0;
}
