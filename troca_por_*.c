#include <stdio.h>
#include <string.h>

/*Criar uma função que receba uma mensagem, seu tamanho e um caractere e retire todas as
ocorrências desse caractere na mensagem, colocando em seu lugar. A função deve retorna o total de caracteres retirados.*/


int main() {

	char mensagem[200];
	int i;
	printf("Escreva uma mensagem de ate 200 caracteres:\n");
	fgets(mensagem, 200, stdin);

	int tamanho=strlen(mensagem);
	char c;
	printf("Digite um caractere a ser removido: ");
	scanf("%c",&c);


	int removidos=0;
	for(i=0 ; i<=tamanho; i++) {

		if(mensagem[i]==c) {
			mensagem[i]= '*' ;
			removidos++;
		}
	}

	printf("Numero de caracteres removidos: %i",removidos);
	printf("\nMensagem modificada:%s ",mensagem);

	return 0;
}
