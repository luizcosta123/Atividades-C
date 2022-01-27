#include <iostream> // "gcc programa.cpp -lstdc++ -o programa"
#include <string>	//ou "g++ programa.cpp -o programa" => Recomendável!

using namespace std; // Não precisa usar mais o "std"

int main() {
	
	char nomeAluno[50];
	float notas[4];
	float media = 0;
	int i = 0;
	
	cout << "Digite o nome do aluno: ";
	cin >> nomeAluno;
	
	for (i = 1; i <= 4; i++) {
		cout << "Digite a nota " << i << ": ";
		cin >> notas[i];
		
		media += notas[i];
	}
	
	media = media / 4;
	
	cout << "Nome: " << nomeAluno << endl;
	
	for (i = 1; i <= 4; i++) {
		cout << "Nota " << i << ": " << notas[i] << endl;
	}
	
	cout << "Media = " << media;
	
	return 0;
}
