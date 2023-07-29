#include <stdio.h>

int main (void){
    int x, y, *p; // declaração das variáveis e do ponteiro
    y = 0;
    p = &y; // o ponteiro recebe o endereço da variavel y
    x = *p; // x recebe o valor que está no endereço de p
    x = 4; // seu valor é sobrescrito
    (*p)++; // o valor apontado por p é incrementado
    --x; // o valor atribuido a x é subtraido em 1
    (*p) += x; // o valor que está em p é incrementado pelo valor que está em x
    printf ("Valor de x = %d \n Valor de y = %d \n Valor *p = %p", x, y, *p); 
    // O valor de x = 3, y = 4 e o ponteiro é o endereço da célula
    return 0;

}
