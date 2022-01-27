//Nome: Luiz Afonso Silva Costa
#include <iostream>
#include "conta.h"

using namespace std;

	conta_bancaria::conta_bancaria(string insere_nome, float insere_saldo) {
		saldo = insere_saldo;
		nome = insere_nome;
	}

	void conta_bancaria::setsaldo(float insere_saldo) {
		saldo = insere_saldo;
	}
	
	float conta_bancaria::getsaldo() {
		return saldo;
	}
	
	void conta_bancaria::setnome(string insere_nome){
		nome = insere_nome;
	}
	
	string conta_bancaria::getnome() {
		return nome;
	}
	
	void conta_bancaria::depositar(float valor_deposito) {
		
		if (valor_deposito > 0) {
			cout << "Deposito Realizado com sucesso!" << endl;
			setsaldo((getsaldo() + valor_deposito));
		}
	}
	
	void conta_bancaria::sacar(float valor_saque) {	
		if (valor_saque > saldo) {
			cout << "Saldo insuficiente!" << endl;
		} else {
			cout << "Saque realizado com sucesso!" << endl;
			setsaldo(getsaldo() - valor_saque);
		}
	}
	
	void conta_bancaria::consulta() {
		cout << getnome() << " seu saldo atual e de: R$" << getsaldo() << endl;
	}
	
	
