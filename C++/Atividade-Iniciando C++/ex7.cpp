#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	int numero = 0;
	int somaPar = 0;
	int somaImpar = 0;
	int quantidade = 0;
	int maior = 0;
	
	while (numero != -999) {
		cout << "Digite um numero: " << endl;
		cin >> numero; 
		
		if (numero % 2 == 0) {
			somaPar += numero;
		} else if (numero % 2 == 1) {
			somaImpar += numero;
			quantidade++;
		}
		
		if (numero > maior) {
			maior = numero;
		}
	}
	
	cout << "A soma dos numeros pares e: " << somaPar << endl;
	cout << "A media dos numeros impares e: " << somaImpar / quantidade << endl;
	cout << "O maior numero e: " << maior << endl;
	
	return 0;
}
