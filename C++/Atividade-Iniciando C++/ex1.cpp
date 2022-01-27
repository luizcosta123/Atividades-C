#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	int x = 0;
	
	cout << "Digite um numero: "; // Saída
	cin >> x; // Entrada
	
	cout << "O numero digitado foi: " << x << endl;
	cout << "Antecessor: " << x - 1 << endl;
	cout << "Sucessor: " << x + 1 << endl;
	
	return 0;
}
