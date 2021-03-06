#ifndef ENDERECO_H_
#define ENDERECO_H_

#include <string>
#include <iostream>
using namespace std;

class Endereco {

private:
	string rua;
	int numero;
	string bairro;
	string referencia;

public:
	//construtor
	Endereco(string novaRua, int novoNumero, string novoBairro, string novaReferencia);

	//getters
	void setRua(string novaRua);
	void setNumero(int novoNumero);
	void setBairro(string novoBairro);
	void setReferencia(string novaReferencia);

	//setters
	string getRua();
	int getNumero();
	string getBairro();
	string getReferencia();

};

#endif /* ENDERECO_H_ */

