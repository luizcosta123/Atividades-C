//Nome: Luiz Afonso Silva Costa
class conta_bancaria {
	
	private: 
	
	//Atributos
	std::string cpf;
	float rendaMensal;
	std::string nome;
	
	public:
	
	//Atributos
	float saldo;
	
	//Construtor
	conta_bancaria(std::string insere_nome = "", float insere_saldo = 0, std::string insere_cpf = "", float insere_rendaMensal = 0); // testa
	
	//Métodos
	void depositar(float valor_deposito);
	void sacar(float valor_saque);
	void consulta();
	
	//set e get
	void setnome(std::string insere_nome);
	std::string getnome();
	void setcpf(std::string insere_cpf);
	std::string getcpf();
	void setrendaMensal(float insere_rendaMensal);
	float getrendaMensal();
	
	// Método destrutor
    ~conta_bancaria();
	
};
