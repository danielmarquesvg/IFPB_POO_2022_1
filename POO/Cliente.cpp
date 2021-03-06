#include "../POO_Classe_Objeto/Cliente.h"

#include <string>
using namespace std;

//construtor
Cliente::Cliente(string novoNome, Endereco novoEndereco, string novoTelefone) {
	this->nome = novoNome;
	this->endereco = novoEndereco;
	this->telefone = novoTelefone;
}

//getters
string Cliente::getNome(){
	return this->nome;
}

Endereco Cliente::getEndereco(){
	return this->endereco;
}

string Cliente::getTelefone(){
	return this->telefone;
}

//setters
void Cliente::setNome(string novoNome){
	this->nome = novoNome;
}

void Cliente::setEndereco(Endereco novoEndereco){
	this->endereco = novoEndereco;
}

void Cliente::setTelefone(string novoTelefone){
	this->telefone = novoTelefone;
}
