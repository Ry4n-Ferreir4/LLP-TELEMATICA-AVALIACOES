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
        return 0;
    }

    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (strstr(linha, produto.produto) != NULL) {
            fclose(arquivo);
            return 1; 
        }
    }

    fclose(arquivo);
    return 0; 
}

void gravarDados(struct Dados produto) {
    FILE *arquivo = fopen("dados.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    fprintf(arquivo, "\nProduto: %s \n", produto.produto);
    fprintf(arquivo, "Preço: R$ %.2f \n",  produto.preco);
    fprintf(arquivo, "Validade: %s \n", produto.validade);

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

    
    if (verificarDadosExistentes(produto)) {
        printf("Os dados informados já existem!\n");
    } else {
       
        gravarDados(produto);
    }

    return 0;
}
