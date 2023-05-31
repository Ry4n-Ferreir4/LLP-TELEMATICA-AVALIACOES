#include <stdio.h>

int main(){


        double base_menor, base_maior, altura;
        printf("Digite a base menor: ");
        scanf("%lf", &base_menor);
        printf("Digite a base maior: ");
        scanf("%lf", &base_maior);

        if (base_menor >= base_maior){
            printf("A base Menor tem que ser menor que a base maior");
        }else if (base_maior == 0){
            printf("A base maior não pode ser 0!");
        }else if(base_menor == 0){
             printf("A base menor não pode ser 0!");
        }else{  
            printf("Digite a altura: ");
            scanf("%lf", &altura);
            if (base_maior <= 0){
             printf("A base maior não pode ser menor que 0");
            }
            else if (base_menor <= 0){
                printf("A base menor não pode ser menor que 0");
            }
            else{
                float area_trapezio = ((base_maior + base_menor) * altura) / 2;
                printf("A area do trapezio %.2f", area_trapezio);
            };

        }
    return 0;
}