#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dados {
    char produto[100];
    float preco;
    char validade[20];
};

int verificarDadosExistentes(struct Dados produto) {
    FILE *arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        return 0; // Arquivo não existe, dados não existem
    }

    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (strstr(linha, produto.produto) != NULL) {
            fclose(arquivo);
            return 1; // Dados já existem
        }
    }

    fclose(arquivo);
    return 0; // Dados não existem
}

void gravarDados(struct Dados produto) {
    FILE *arquivo = fopen("dados.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fprintf(arquivo, "%s, %.2f, %s\n", produto.produto, produto.preco, produto.validade);

    fclose(arquivo);
    printf("Dados gravados com sucesso!\n");
}

int main() {
    struct Dados produto;

    printf("Informe o nome do produto: ");
    fgets(produto.produto, sizeof(produto.produto), stdin);
    produto.produto[strcspn(produto.produto, "\n")] = '\0';

    printf("Informe o preço do produto: ");
    scanf("%f", &produto.preco);

    printf("Informe a validade do produto: ");
    scanf("%s", produto.validade);

    // Verificar se os dados já existem
    if (verificarDadosExistentes(produto)) {
        printf("Os dados informados já existem!\n");
    } else {
        // Gravar os dados no arquivo
        gravarDados(produto);
    }

    return 0;
}
