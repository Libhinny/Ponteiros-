#include <stdio.h>
#include <math.h>

void calcula_hexagono (float l, float *area, float *perimetro){ // essa função recebe os 3 argumentos necessários para realizar o cálculo da área e do perímetro
    *area = (3*pow(l, 2)*sqrt(3))/2; // cálculo da area do hexagono
    *perimetro = 6*l; // cálculo do perimetro do hexagono
}

int main (void){
    float lado, A, P; // declaração das variáveis 
    printf("Informe o valor do lado do hexagono: "); // recebe o valor do lado do hexagono pelo user
    scanf("%f", &lado); // coloca o valor fornecido na variável 'lado'
    calcula_hexagono(lado, &A, &P); // chama a função e faz o cálculo da área e do perímetro, com os três argumentos necessários 
    printf("Resultado da área e do perímetro = %f%f\n", A, P); // imprime o resultado dos cálculos 
    return 0;
}
