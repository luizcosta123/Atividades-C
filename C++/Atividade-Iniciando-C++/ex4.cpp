#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	int notas[4];
	int i = 0;
	float soma = 0;
	
	for (i = 1; i <= 4; i++) {
		cout << "Digite suas notas: "; // Saída
		cin >> notas[i]; // Entrada
	}
	
	for (i = 1; i <= 4; i++) {
		cout << "Nota - " << i << ": " << notas[i] << endl; // Saída
		soma += notas[i];
		
		if (i == 4) {
			cout << "Media aritmetica: " << soma / i << endl;
		}
	}
	
	
	
	return 0;
}
