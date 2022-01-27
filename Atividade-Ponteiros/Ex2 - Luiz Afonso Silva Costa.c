#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char palavra[100];
	int i = 0;
	int tamanho = 0;
	char *ponteiro;
	
	printf("Digite uma palavra: ");
	fgets(palavra, 100, stdin);
	palavra[strlen(palavra) - 1] = '\0';
	
	for (i = 0; i <= strlen(palavra); i ++) {
		ponteiro = &palavra[i];
		
		if (*ponteiro == '\0') {
			printf("Tamanho da palavra: %d", tamanho);
		}
	
		tamanho++;
	}
	
	return 0;
	
}
