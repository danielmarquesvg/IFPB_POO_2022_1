#include "../POO_Classe_Objeto/Pedido.h"

#include <string>
using namespace std;

//construtor
Pedido::Pedido(Cliente novoCliente, double novoValorTotal, string novaDataDoPedido, string novoHorarioDoPedido) {
	this->cliente = novoCliente;
	this->valorTotal = novoValorTotal;
	this->dataDoPedido = novaDataDoPedido;
	this->horarioDoPedido = novoHorarioDoPedido;
}

//GETTERS
Cliente Pedido::getCliente(){
	return this->cliente;
}

double Pedido::getValorTotal(){
	return this->valorTotal;
}

string Pedido::getDataDoPedido(){
	return this->dataDoPedido;
}

string Pedido::getHorarioDoPedido(){
	return this->horarioDoPedido;
}

//SETTERS
void Pedido::setCliente(Cliente novoCliente){
	this->cliente = novoCliente;
}

void Pedido::setValorTotal(double novoValorTotal){
	this->valorTotal = novoValorTotal;
}

void Pedido::setDataDoPedido(string novaDataDoPedido){
	this->dataDoPedido = novaDataDoPedido;
}

void Pedido::setHorarioDoPedido(string novoHorarioDoPedido){
	this->horarioDoPedido = novoHorarioDoPedido;
}
