//Nome: Luiz Afonso Silva Costa
class conta_bancaria {
	
	private: 
	
	//Atributos
	float saldo;
	std::string nome;
	
	public:
	
	//Construtor
	conta_bancaria(std::string insere_nome, float insere_saldo);
	
	//Métodos
	void depositar(float valor_deposito);
	void sacar(float valor_saque);
	void consulta();
	
	//set e get 
	void setsaldo(float insere_saldo);
	float getsaldo();
	void setnome(std::string insere_nome);
	std::string getnome();
	
};
