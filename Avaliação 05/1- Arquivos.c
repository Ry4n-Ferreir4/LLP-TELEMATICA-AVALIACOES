/*
Avaliação 05 Q-01 em C LLP-TELEMATICA S1

1 - Crie/Abra um arquivo de texto de nome "arq.txt"
2- Permita que o usuário grave diversos caracteres nesse arquivo, 
até que o usuário entre com o caractere '0'
3- feche o arquivo

agora, abra e leia o arquivo, caractere por caractere, e escreva na tela 
TODOS os caracteres armazenados.

*/
    
#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    
    arquivo = fopen("arq.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite os caracteres para serem gravados no arquivo (digite '0' para sair):\n");

    
    while (1) {
        scanf("%c", &caractere);

        if (caractere == '0') {
            break;
        }

        fputc(caractere, arquivo); 
        
        if (caractere == '\n') {
            fputc('\r', arquivo); //(CR) após a quebra de linha 
            fputc('\n', arquivo); //(LF) após a quebra de linha
        }
    }


    fclose(arquivo);

    printf("Arquivo gravado e fechado com sucesso.\n");

    arquivo = fopen("arq.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }
    fclose(arquivo);

    return 0;
}
