#include <stdio.h>
#include <ctype.h>
int main(){

FILE *arquivo;
char nomeArquivo[100];
char caracter;
int numVogais = 0;
int numConsoante = 0;

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
    
    if (caracter >= 'a' && caracter <= 'z'){
         if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
                 numVogais++;
            }else{
                numConsoante++;
            }
    }
}
    
    
    printf("O numero de vogais nesse arquivo é: (%d) o numero de consoante é: (%d)", numVogais, numConsoante);

    return 0;
}