#include <string>
#include <iostream>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

using namespace std;

class Engenheiro : public Empregado
{
    Engenheiro::Engenheiro(string _nome, double _salario, double _horas, int _projetos) {
        this->nome = _nome;
        this->salarioHora = _salario;
        this->horasTrabalhadas = _horas;
        this->projetos = _projetos;
        
        
public:
    string nome;
    int projetos;
    }


void Engenheiro::imprimirEng(valor) {
    cout << "Nome: " << this->getNome() << endl;
    cout << "Salario Mes: " << this->pagamentoMes(valor) << endl;
    cout << "Projetos: " << this->getProjetos() << endl;
    cout << endl;
}

int Engenheiro::getProjetos() {
    return this->projetos;
}

void Engenheiro::setProjetos(int projetos) {
    this->projetos = projetos;
}

