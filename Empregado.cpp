#include <iostream>
#include "Empregado.hpp"
#define HORAS_NORMAIS_DE_SERVICO 8

using namespace std;

Empregado::Empregado(string _nome, double _salario , double _horas) {
    this->nome = _nome;
    this->salarioHora = _salario;
    this->horasTrabalhadas = _horas;
    
}


double Empregado::pagamentoMes(double horasTrabalhadas) {
    double tempo = horasTrabalhadas;
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORAS_NORMAIS_DE_SERVICO) {
        double horasEx = horasTrabalhadas - HORAS_NORMAIS_DE_SERVICO;
        tempo += horasEx / 2;
    }
    double valorPago = tempo * this->salarioHora();
    return valorPago;
}

double Empregado::getSalarioHora() {
    return this->salarioHora;
}

void Empregado::setSalarioHora(double salario) {
    this->salarioHora = salario;
}

void Empregado::setNome(string nome) {
    this->nome = nome;
}

string Empregado::getNome() {
    return this->nome;
}