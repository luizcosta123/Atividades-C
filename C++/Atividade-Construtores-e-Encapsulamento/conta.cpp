//Nome: Luiz Afonso Silva Costa
#include <iostream>
#include "conta.h"

using namespace std;

	conta_bancaria::conta_bancaria(string insere_nome, float insere_saldo,string insere_cpf, float insere_rendaMensal) {
		nome = insere_nome;
		cpf = insere_cpf;
		rendaMensal = insere_rendaMensal;
		saldo = insere_saldo;
	}
	
	conta_bancaria::~conta_bancaria() {
    cout << "Objeto finalizado!" << endl;
	}
	
	void conta_bancaria::setnome(string insere_nome){
		nome = insere_nome;
	}
	
	string conta_bancaria::getnome() {
		return nome;
	}
	
	void conta_bancaria::setcpf(string insere_cpf){
		cpf = insere_cpf;
	}
	
	std::string conta_bancaria::getcpf() {
		return cpf;
	}
	
	void conta_bancaria::setrendaMensal(float insere_rendaMensal){
		rendaMensal = insere_rendaMensal;
	}
	
	float conta_bancaria::getrendaMensal() {
		return rendaMensal;
	}
	
	void conta_bancaria::depositar(float valor_deposito) {
		if(cpf == "" || nome == "") {
			cout << "Erro na criacao da sua conta, verifique seu nome e CPF" << endl;
		} else if (valor_deposito > 0) {
			cout << "Deposito Realizado com sucesso!" << endl;
			saldo += valor_deposito; // setsaldo((getsaldo() + valor_deposito));
		}
	}
	
	void conta_bancaria::sacar(float valor_saque) {	
		if(cpf == "" || nome == "") {
			cout << "Erro na criacao da sua conta, verifique seu nome e CPF" << endl;
		} else if (valor_saque > saldo) {
			cout << "Saldo insuficiente!" << endl;
		} else {
			cout << "Saque realizado com sucesso!" << endl;
			saldo -= valor_saque; //setsaldo(getsaldo() - valor_saque);
		}
	}
	
	void conta_bancaria::consulta() {
		if(cpf == "" || nome == "") {
			cout << "Erro na criacao da sua conta, verifique seu nome e CPF" << endl;
		} else {
			cout << getnome() << " seu saldo atual e de: R$" << saldo << endl;
			cout << "Cpf: " << getcpf() << endl;
			cout << "Renda mensal: " << getrendaMensal() << endl;
		}
	}
	
	
