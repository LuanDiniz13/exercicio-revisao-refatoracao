#include <string>
#include <iostream>
#include "Empregado.hpp"
#include "Vendedor.hpp"

#define QT_MESES 12

using namespace std;

class Vendedor : public Empregado{
Vendedor::Vendedor(std::string _nome, double _salario, double _horas, int _quota) {
	this->nome = _nome;
	this->salarioHora = _salario;
	this->horasTrabalhadas = _horas;
	this->quotaMensalVendas = _quota;
}

public:
	std::string _nome;

double Vendedor::quotaTotalAnual() {
		return this->quotaMensalVendas() * QT_MESES;
}

Vendedor::Vendedor(string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome, salarioHora) {
		this->setQuotaMensalVendas(quotaMensalVendas);
	}

	double Vendedor::quotaTotalAnual() {
		return this->getQuotaMensalVendas() * QT_MESES;
	}

	void Vendedor::imprimirVendedor(double valor) {
		cout << "Nome: " << this->getNome() << endl;
		cout << "Salario Mes: " << this->pagamentoMes(valor) << endl;
		cout << "Quota vendas: " << this->quotaTotalAnual() << endl;
		cout << endl;
	}

	void Vendedor::setQuotaMensalVendas(double quotaMensalVendas) {
		this->quotaMensalVendas = quotaMensalVendas;
	}

	double Vendedor::getQuotaMensalVendas() {
		return this->quotaMensalVendas;
	}

};