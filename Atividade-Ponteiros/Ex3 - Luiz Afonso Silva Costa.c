#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char primeiraPalavra[100];
	char segundaPalavra[100];
	int i = 0;
	int tamanho = 0;
	char *ponteiro[100];
	
	printf("Digite uma palavra: ");
	fgets(primeiraPalavra, 100, stdin);
	primeiraPalavra[strlen(primeiraPalavra) - 1] = '\0';
	
	printf("Digite outra palavra: ");
	fgets(segundaPalavra, 100, stdin);
	segundaPalavra[strlen(segundaPalavra) - 1] = '\0';
	
	for (i = 0; i <= strlen(primeiraPalavra); i++) {
		
		ponteiro[i] = &primeiraPalavra[i];
		
	}
	
	for (i = 0; i <= strlen(segundaPalavra); i++) {
		
		ponteiro[strlen(primeiraPalavra) + i] = &segundaPalavra[i];
		
	}
	
	printf("Palavra concatenada: ");
	
	for (i = 0; i < strlen(primeiraPalavra) + strlen(segundaPalavra); i++) {
		
		printf("%c", *ponteiro[i]);
		
	}
	
	return 0;
	
}
