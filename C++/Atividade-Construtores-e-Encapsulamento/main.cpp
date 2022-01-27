//Nome: Luiz Afonso Silva Costa
#include <iostream>
#include <string>
#include "conta.h"

using namespace std;

int main() {
	
	//Usuário_1 => Contém apenas nome e CPF (Requitos para a criação da conta)
	
	conta_bancaria usuario_1("Tadeo", NULL, "12312312312", NULL);
	usuario_1.consulta();
	cout << endl;
	usuario_1.depositar(1000.5);
	usuario_1.consulta();
	cout << endl;
	usuario_1.sacar(900.9);
	usuario_1.consulta();
	cout << endl;
	usuario_1.sacar(150);
	
	cout << endl;
	
	//Usuário_2 => Não Contém nome, saldo, CPF e renda mensal
	
	conta_bancaria usuario_2("", NULL, "", NULL);
	usuario_2.consulta();
	cout << endl;
	usuario_2.depositar(100000);
	usuario_2.consulta();
	cout << endl;
	usuario_2.sacar(200);
	usuario_2.consulta();
	cout << endl;
	usuario_1.sacar(150000);
	
	cout << endl;
	
	//Usuário_3 => Contém tudo (Requitos para a criação da conta)
	
	conta_bancaria usuario_3("Luiz", 5000, "12312312312", 7000);
	usuario_3.consulta();
	cout << endl;
	usuario_3.depositar(1000);
	usuario_3.consulta();
	cout << endl;
	usuario_3.sacar(3000);
	usuario_3.consulta();
	cout << endl;
	usuario_3.sacar(10000);
	
	
	
//	conta_bancaria usuario_1("Luiz", 500, 134, 50.5);
//	conta_bancaria usuario_2("Tadeo", 700, 400, 90.5);
//	
//	usuario_1.consulta();
//	usuario_1.depositar(1000.5);
//	usuario_1.consulta();
//	usuario_1.sacar(900.9);
//	usuario_1.consulta();
//	usuario_1.sacar(700);
//	
//	cout << endl;
//	
//	usuario_2.consulta();
//	usuario_2.depositar(980.5);
//	usuario_2.consulta();
//	usuario_2.sacar(90);
//	usuario_2.consulta();
//	usuario_2.sacar(100000);
	
	return 0;
	
}

