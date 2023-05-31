#include <stdio.h>
#include <math.h>

int main (){

float nota_1 , nota_2, nota_3;


printf("Nota 1: ");
scanf("%f", &nota_1);

printf("Nota 2: ");
scanf("%f", &nota_2);

printf("Nota 3: ");
scanf("%f", &nota_3);

float media_ponderada = (nota_1 * 1 + nota_2 * 1 + nota_3 * 2) / 4;

if (media_ponderada >= 60) {
    printf("Parabéns! Você foi aprovado com: %.2f", media_ponderada);

}

else {
    printf("Você reprovou com: %.2f. Estude mais!", media_ponderada);

}
 

return 0;
}