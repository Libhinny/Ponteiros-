#include <stdio.h>

int main (void){
 float var = 2.5; // declaração da varíável var
float *ponteiro = &var; // daclaração do ponteiro que aponta para o endereço da variável var
printf ("var = %f \n ponteiro = %p", var, ponteiro); // aqui vai exibir o valor de var e o endereço de memória apontado
return 0;
}
