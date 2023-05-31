#include <stdio.h>
#include <ctype.h>
int main(){

FILE *arquivo;
char nomeArquivo[100];
char caracter;
int numVogais = 0;

printf("Digite o nome do arquivo de texto: ");
scanf("%s", nomeArquivo);

arquivo = fopen(nomeArquivo, "r");
if (arquivo == NULL){
    printf("O arquivo é invalido ou inexistente, insira arquivos no formato *.txt");
    return 1;
}   

while ( (caracter = fgetc(arquivo)) != EOF)
{

    caracter = tolower(caracter);
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            numVogais++;
        }

}
    char msg[100];
    if (numVogais > 1){
       printf("O numero de vogais contidas no arquivo é %d vogais\n", numVogais);
    }else if(numVogais < 1){
        printf("O arquivo não contem Vogais\n");
        return 1;
    }
    else{
        printf("o numero de vogais contidas no arquivo é %d vogal\n", numVogais);
    }

    return 0;
}