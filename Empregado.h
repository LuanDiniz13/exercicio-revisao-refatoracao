#pragma once
#include <iostream>
#include <string>
#define HORAS_NORMAIS_DE_SERVICO 8

using namespace std;

class Empregado
{

public:
    double salarioHora;
    double quotaMensalVendas;
protected:
    string nome;
    double horasTrabalhadas;
    double salarioHora;

public:
    Empregado(std::string _nome, double _salario, double _horas);
    double pagamentoMes(double horasTrabalhadas);

    void setSalarioHora(double salario);
    double getSalarioHora();
    string getNome();
    void setNome(string nome);
    

};
