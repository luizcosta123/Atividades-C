#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

struct aluno_t {
	int nota[2];
	bool aprovado;
};

int main() {
	
	struct aluno_t registro[10];
	int i = 0;
	int media = 0;
	
	for (i = 1; i <= 10; i++) {
		cout << "---- Aluno " << i << " ----" << endl;
		cout << "Digite a nota 1: "; // Saída
		cin >> registro[i].nota[i]; // Entrada
		cout << "Digite a nota 2: "; // Saída
		cin >> registro[i].nota[i + 1]; // Entrada
		
		media = (registro[i].nota[i] + registro[i].nota[i + 1]) / 2;
		
		if (media >= 7) {
			registro[i].aprovado = true;
		} else {
			registro[i].aprovado = false;
		}
	}
	
	for (i = 1; i <= 10; i++) {
		if (registro[i].aprovado == true){
			cout << "Aluno " << i << ": Aprovado" << endl;
		} else {
			cout << "Aluno " << i << ": Reprovado" << endl;
		}
	}
	
	return 0;
}
