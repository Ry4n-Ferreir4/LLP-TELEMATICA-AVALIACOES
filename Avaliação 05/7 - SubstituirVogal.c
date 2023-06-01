#include <stdio.h>
#include <ctype.h>

typedef struct {
    char nomeArquivoEntrada[100];
    char nomeArquivoSaida[100];
} Arquivos;

void substituirVogais(Arquivos arquivos) {
    FILE *arquivoEntrada, *arquivoSaida;
    char caractere;

    arquivoEntrada = fopen(arquivos.nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada!\n");
        return;
    }

    arquivoSaida = fopen(arquivos.nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao abrir o arquivo de saída!\n");
        fclose(arquivoEntrada);
        return;
    }

    while ((caractere = fgetc(arquivoEntrada)) != EOF) {
        caractere = tolower(caractere);

 
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            caractere = '*';
        }

        fputc(caractere, arquivoSaida);
    }

 
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída criado com sucesso!\n");
}

int main() {
    Arquivos arquivos;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arquivos.nomeArquivoEntrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", arquivos.nomeArquivoSaida);

    substituirVogais(arquivos);

    return 0;
}
