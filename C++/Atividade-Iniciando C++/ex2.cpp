#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomend�vel!

using namespace std; // N�o precisa usar mais o "std"

int main() {
	
	int base = 0;
	int altura = 0;
	
	cout << "Digite a base do triangulo: "; // Sa�da
	cin >> base; // Entrada
	
	cout << "Digite a altura do triangulo: "; // Sa�da
	cin >> altura; // Entrada
	
	cout << "Area do triangulo: " << (base * altura) / 2 << endl; // Sa�da
	
	return 0;
}
