#include "Triangulo.h"
#include <string>
#include <iostream>
using namespace std;

int main(){

	string nome;
	int tamanhoDoLado, quantidadeDeLados;
	double base, altura, area, perimetro;

	std::cout << "Digite o nome da figura geometrica: ";
	std::cin >> nome;

	std::cout << "Digite o tamanho do lado: ";
	std::cin >> tamanhoDoLado;

	std::cout << "Digite a quantidade de lados: ";
	std::cin >> quantidadeDeLados;

	//supondo um triangulo equilatero
	base = tamanhoDoLado;

	std::cout << "Digite a altura: ";
	std::cin >> altura;

	//instanciando o objeto
	Triangulo triangulo1 = Triangulo(base, altura, nome, tamanhoDoLado, quantidadeDeLados);

	//heranca de FiguraGeometrica
	perimetro = triangulo1.calcularPerimetro(tamanhoDoLado, quantidadeDeLados);
	area = triangulo1.calcularArea(base, altura);

	std::cout << "Perimetro do triangulo: " << perimetro << std::endl;
	std::cout << "Area do triangulo: " << area << std::endl;
	return 0;
}
