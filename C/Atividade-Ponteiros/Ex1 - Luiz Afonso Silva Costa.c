#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i = 0;
	int vetor[10];
	int *ponteiro;
	
	for (i = 0; i < 10; i++) {
		printf("Digite o valor para o vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
		fflush(stdin);
	}
	
	printf("\n----------------------------------\n");
	printf("Vetor impresso na ordem contrária: \n");
	printf("----------------------------------\n\n");
	
	for (i = 9; i >= 0; i--) {
		ponteiro = &vetor[i];
		printf("vetor[%d]: %d\n", i, *ponteiro);
		fflush(stdin);
	}
	
	return 0;
	
}
