//Nome: Luiz Afonso Silva Costa
#include <iostream>
#include <string>
#include "conta.h"

using namespace std;

int main() {
	
	conta_bancaria usuario_1("Luiz", 500);
	conta_bancaria usuario_2("Tadeo", 700);
	
	usuario_1.consulta();
	usuario_1.depositar(1000.5);
	usuario_1.consulta();
	usuario_1.sacar(900.9);
	usuario_1.consulta();
	usuario_1.sacar(700);
	
	cout << endl;
	
	usuario_2.consulta();
	usuario_2.depositar(980.5);
	usuario_2.consulta();
	usuario_2.sacar(90);
	usuario_2.consulta();
	usuario_2.sacar(100000);
	
	return 0;
	
}

