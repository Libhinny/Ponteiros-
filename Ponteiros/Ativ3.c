#include <stdio.h>

    int soma (int valor1, int valor2){ // nesta função, temos dois argumentos do tipo inteiro
        int sum = valor1 + valor2; // e ele vai realizar a soma desses dois valores
        return sum;
    }

int main(void){
    
int (*p)(int, int) = soma; // aqui este ponteiro aponta para a função soma
int resultado = p(2,3); // chama a função através do ponteiro 'p' e a soma é armazenada na variável 'resultado'
printf ("Valor da soma = %d \n", resultado); // imprime o resultado da soma
   
    return 0;
}
