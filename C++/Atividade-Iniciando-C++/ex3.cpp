#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomend�vel!

#define pi 3.14159

using namespace std; // N�o precisa usar mais o "std"

int main() {
	
	int raio = 0;
	int altura = 0;
	
	cout << "Digite o raio do cilindro: "; // Sa�da
	cin >> raio; // Entrada
	
	cout << "Digite a altura do cilindro: "; // Sa�da
	cin >> altura; // Entrada
	
	cout << "Volume do cilindro: " << pi * (raio * raio) * altura << endl; // Sa�da
	
	return 0;
}
