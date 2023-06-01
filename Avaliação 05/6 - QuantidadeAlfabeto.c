#include <stdio.h>
#include <ctype.h>

void contarOcorrenciasLetras(const char *nomeArquivo, int *ocorrencias) {
    FILE *arquivo;
    char caractere;

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    
    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere); 

        if (caractere >= 'a' && caractere <= 'z') {
            ocorrencias[caractere - 'a']++;
        }
    }


    fclose(arquivo);
}

int main() {
    char nomeArquivo[100];
    int ocorrencias[26] = {0};

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    contarOcorrenciasLetras(nomeArquivo, ocorrencias);

    printf("O arquivo possui as seguintes ocorrências de letras:\n");
    for (int i = 0; i < 26; i++) {
        char letra = 'A' + i;
        printf("%c: %d\n", letra, ocorrencias[i]);
    }

    return 0;
}
