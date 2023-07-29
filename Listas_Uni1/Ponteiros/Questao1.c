#include <stdio.h>

int main (void){
    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;
    printf ("Valor de x = %d \n Valor de y = %d \n Valor *p = %p", x, y, *p); 
    // O valor de x = 3, y = 4 e o ponteiro é o endereço da célula
    return 0;

}
