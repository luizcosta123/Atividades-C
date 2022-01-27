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
	
	struct agenda_t registro;
	
	printf("Digite o nome: ");
	fgets(registro.nome, 50, stdin); // fgets serve para receber do teclado com segurança
	registro.nome[strlen(registro.nome) - 1] = '\0';
	
	printf("Digite o endereco: ");
	fgets(registro.endereco, 50, stdin);
	registro.endereco[strlen(registro.endereco) - 1] = '\0';
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &registro.ano_nasc);
	fflush(stdin); // limpa os dados do teclado
	
	printf("Digite o telefone: ");
	fgets(registro.telefone, 15, stdin);
	registro.telefone[strlen(registro.telefone) - 1] = '\0';
	
	printf("Nome: %s\n", registro.nome);
	printf("Endereco: %s\n", registro.endereco);
	printf("Ano de nascimento: %d\n", registro.ano_nasc);
	printf("Telefone: %s\n", registro.telefone);
	printf("Idade: %d", 2021 - registro.ano_nasc);
	
	return 0;
	
}
