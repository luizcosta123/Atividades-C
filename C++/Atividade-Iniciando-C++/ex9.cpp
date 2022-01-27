#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	int numero = 0;
	int maior = 0;
	int menor = 0;
	int i = 0;
	
	for (i = 0; i < 5; i++) {
		cout << "Digite um numero: ";
		cin >> numero;
		
		if (i == 0) {
			maior = numero;
			menor = numero;
		}
		
		if (numero > maior) {
			maior = numero;
		}
		
		if (numero < menor) {
			menor = numero;
		}
	}
	
	cout << "Maior numero: " << maior << endl;
	cout << "Menor numero: " << menor << endl;
	
	return 0;
}
