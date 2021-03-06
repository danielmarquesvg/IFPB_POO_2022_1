#ifndef PEDIDO_H_
#define PEDIDO_H_

#include <string>

#include "../POO_Classe_Objeto/Cliente.h"
using namespace std;


class Pedido {

	private:
		Cliente cliente;
		double valorTotal;
		string dataDoPedido;
		string horarioDoPedido;

	public:
		//construtor
		Pedido(Cliente novoCliente, double novoValorTotal, string novaDataDoPedido, string novoHorarioDoPedido);

		//getters
		Cliente getCliente();
		double getValorTotal();
		string getDataDoPedido();
		string getHorarioDoPedido();

		//setters
		void setCliente(Cliente novoCliente);
		void setValorTotal(double novoValorTotal);
		void setDataDoPedido(string novaDataDoPedido);
		void setHorarioDoPedido(string novoHorarioDoPedido);
};

#endif /* PEDIDO_H_ */
