#include <stdio.h>
#include <ctype.h>


int main(){

    FILE *arquivo;
    char caractere; 
    char caractereApoio;
    char nomeArquivo[100];
    int numCaractere;
    
printf("Digite o Caracter que deseja fazer a consulta: ");
scanf("%c", &caractereApoio);

printf("Digite o nome do arquivo de texto: ");
scanf("%s", &nomeArquivo);



arquivo = fopen(nomeArquivo, "r");
if (arquivo == NULL){
    printf("O arquivo é invalido ou inexistente, insira arquivos no formato *.txt");
    return 1;
}   

while ( (caractere = fgetc(arquivo)) != EOF)
{

    caractere = tolower(caractere);
    
    if (caractere >= 'a' && caractere <= 'z' || caractere >= '0' && caractere){
         if (caractere == caractereApoio) {
                 numCaractere++;
            }
    }
}

printf("A quantidade de vezes que a letra (%c) aparece é (%d) vez(es). ",caractereApoio,numCaractere);

    return 0;
}