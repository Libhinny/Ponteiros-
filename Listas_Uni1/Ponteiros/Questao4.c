#include <stdio.h>
#include <math.h>

void calcula_hexagono (float l, float *area, float *perimetro){
    *area = (3*pow(l, 2)*sqrt(3))/2;
    *perimetro = 6*l;
}

int main (void){
    float lado, A, P;
    printf("Informe o valor do lado do hexagono: ");
    scanf("%f", &lado);
    calcula_hexagono(lado, &A, &P);
    printf("Resultado da área e do perímetro = %f%f\n", A, P);
    return 0;
}
