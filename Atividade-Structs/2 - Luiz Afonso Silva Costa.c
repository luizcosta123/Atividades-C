//Nome: Luiz Afonso Silva Costa
#include <stdio.h>
#include <string.h>

struct agenda_t {
	char nome[50];
	char endereco[50];
	int ano_nasc;
	char telefone[15];
};

int main() {
	
	struct agenda_t registro[10];
	
	int i = 0;
	int j = 0;
	
	for (i = 0; i < 10; i++) {
		
	printf("Digite o nome: ");
	fgets(registro[i].nome, 50, stdin); // fgets serve para receber do teclado com segurança
	registro[i].nome[strlen(registro[i].nome) - 1] = '\0';
	
	printf("Digite o endereco: ");
	fgets(registro[i].endereco, 50, stdin);
	registro[i].endereco[strlen(registro[i].endereco) - 1] = '\0';
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &registro[i].ano_nasc);
	fflush(stdin); // limpa os dados do teclado
	
	printf("Digite o telefone: ");
	fgets(registro[i].telefone, 15, stdin);
	registro[i].telefone[strlen(registro[i].telefone) - 1] = '\0';
	
	printf("\n");
		
	}
	
	printf("\n--------------------- Todos os registros: ---------------------\n");
	
	i = 0;
	
	for (i = 0; i < 10; i++) {
		
			printf("Nome: %s\n", registro[i].nome);
			printf("Endereco: %s\n", registro[i].endereco);
			printf("Ano de nascimento: %d\n", registro[i].ano_nasc);
			printf("Telefone: %s\n", registro[i].telefone);
			printf("Idade: %d\n", 2021 - registro[i].ano_nasc);
			
	}
	
	return 0;
	
}
