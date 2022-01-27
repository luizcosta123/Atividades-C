#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	int base = 0;
	int altura = 0;
	
	cout << "Digite a base do triangulo: "; // Saída
	cin >> base; // Entrada
	
	cout << "Digite a altura do triangulo: "; // Saída
	cin >> altura; // Entrada
	
	cout << "Area do triangulo: " << (base * altura) / 2 << endl; // Saída
	
	return 0;
}
