//Nome: Luiz Afonso Silva Costa
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct agenda_t {
	char nome[50];
	char endereco[50];
	int ano_nasc;
	char telefone[15];
};

int main() {
	
	struct agenda_t registro[100];
	struct agenda_t aux[100];
	
	int i = 0;
	int j = 0;
	int k = 0;
	int quantidade = 0;
	int valor = 0;
	char nomeProcurado[50];
	char telefoneProcurado[15];
	int tamanho = sizeof(registro)/sizeof(registro[0]);
	
	do {
		
		printf("Cadastrar - 1 / Consultar o telefone pelo nome - 2 / consultar nome pelo telefone - 3 / visualizar registros em ordem de idade - 4 / sair - 5\n");
		scanf("%d", &valor);
		fflush(stdin);
	
	switch(valor) {
		
		case 1:
			printf("Digite o nome: ");
			fgets(registro[i].nome, 50, stdin);
			registro[i].nome[strlen(registro[i].nome) - 1] = '\0';
		
			printf("Digite o endereco: ");
			fgets(registro[i].endereco, 50, stdin);
			registro[i].endereco[strlen(registro[i].endereco) - 1] = '\0';
		
			printf("Digite o ano de nascimento: ");
			scanf("%d", &registro[i].ano_nasc);
			fflush(stdin);
		
			printf("Digite o telefone: ");
			fgets(registro[i].telefone, 15, stdin);
			registro[i].telefone[strlen(registro[i].telefone) - 1] = '\0';
			
			i++;
			
			quantidade = i;
			
			printf("\n");
			
			break;
		
		case 2:
			printf("Digite o nome: ");
			fgets(nomeProcurado, 50, stdin);
			nomeProcurado[strlen(nomeProcurado) - 1] = '\0';
			
			for (j = 0; j < quantidade; j++) {
				
				if (strcmp(nomeProcurado, registro[j].nome) == 0) {
					printf("Telefone registrado no nome '%s': %s.\n", registro[j].nome, registro[j].telefone);
				}
				
			}
			
			printf("\n");
			
			break;
			
		case 3:
			printf("Digite o telefone: ");
			fgets(telefoneProcurado, 15, stdin); // fgets serve para receber do teclado com segurança
			telefoneProcurado[strlen(telefoneProcurado) - 1] = '\0';
			
			for (j = 0; j < quantidade; j++) {
				
				if (strcmp(telefoneProcurado, registro[j].telefone) == 0) {
					printf("Nome que contem este telefone '%s': %s.\n", registro[j].telefone, registro[j].nome);
				}
				
			}
			
			printf("\n");
		
			break;
			
		case 4:
			
			for(j = 0; j < quantidade; j++) {
				
				for(k = 0; k < quantidade; k++) {
				
					if (registro[j].ano_nasc > registro[k].ano_nasc) {
					
						aux[0] = registro[j];
						registro[j] = registro[k];
						registro[k] = aux[0];
					
					}
				
				}
				
			}
			
			for(j = 0; j < quantidade; j++) {
				
				printf("Nome: %s\n", registro[j].nome);
				printf("Endereco: %s\n", registro[j].endereco);
				printf("Ano de nascimento: %d\n", registro[j].ano_nasc);
				printf("Telefone: %s\n", registro[j].telefone);
				printf("Idade: %d\n", 2021 - registro[j].ano_nasc);
				
			}
	
		} 
	
	} while (valor != 5);
	
	return 0;
	
}


