#include <stdio.h>

int main (void){
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p = %p\t Valor de *p = %p", p, *p);
    return 0;
}
// Antes de compilar: 
// a) De erro; b) Aparece a mensagem de erro devido as inconsistências no programa, como por exemplo
// definir corretamente o endereço da variavel no ponteiro, não ter o return no fim do código. 
// c) A execução mão foi bem sucedida. 
// d) Alterações feitas.
// e) A execução foi bem sucedida.
