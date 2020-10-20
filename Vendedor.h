#pragma once
#include <iostream>
#include <string>
#include "Empregado.hpp"
#define QT_MESES 12

using namespace std;


class Vendedor : public Empregado{

private:
    double quotaMensalVendas;

public:
    Vendedor(string _nome, double _salario, double _hora , double quotaMensalVendas);
    double quotaTotalAnual();
    void imprimirVendedor(double valor);

    double getQuotaMensalVendas();
    void setQuotaMensalVendas(double quotaMensalVendas);

};
