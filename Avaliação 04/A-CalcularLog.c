#include <stdio.h>
#include <math.h>

int main(){

    int num_1;

    printf("Digite um numero: ");
    scanf("%d", &num_1);

    if (num_1 < 0){
        printf("Número Inválido");
    }
    else{

        double log_num1 = log10(num_1);
        printf("O Logaritmo de %d na base 10 é: %f", num_1, log_num1);
        
    };


    return 0;
}