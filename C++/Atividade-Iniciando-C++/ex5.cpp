#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	int numeros[10];
	int positivo = 0;
	int negativo = 0;
	int i = 0;
	
	for (i = 0; i < 10; i++) {
		cout << "Digite um numero: "; // Saída
		cin >> numeros[i]; // Entrada
		
		if (numeros[i] >= 0) {
			positivo += numeros[i];
		} else {
			negativo++;	
		}
		
		if (i == 9) {
			cout << "Soma numeros positivos: " << positivo << endl;
			cout << "Quantidade de numeros negativos: " << negativo << endl;
		}
	}
	
	return 0;
}
