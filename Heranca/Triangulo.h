#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "FiguraGeometrica.h"
#include <string>
using namespace std;

class Triangulo : public FiguraGeometrica {

public:
	//atributos
	double base;
	double altura;

	//construtor
	Triangulo(double base, double altura, string novoNome, double novoTamanhoDoLado, double novaQuantidadeDeLados);

	//metodos
	//considere que eh um triangulo equilatero
	double calcularArea(double base, double altura);

};

#endif /* TRIANGULO_H_ */
