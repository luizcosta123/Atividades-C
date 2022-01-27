#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

#define pi 3.14159

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	int raio = 0;
	int altura = 0;
	
	cout << "Digite o raio do cilindro: "; // Saída
	cin >> raio; // Entrada
	
	cout << "Digite a altura do cilindro: "; // Saída
	cin >> altura; // Entrada
	
	cout << "Volume do cilindro: " << pi * (raio * raio) * altura << endl; // Saída
	
	return 0;
}
