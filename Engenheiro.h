#pragma once
#include <string>
#include <iostream>
#include "Empregado.hpp"

using namespace std;

class Engenheiro : public Empregado
{

private:
    
    int projetos;

public:
    Engenheiro(string _nome, double _salario, double _horas, int _projetos);
    void imprimirEng(double valor);
    void setProjetos(int projetos);
    int getProjetos();
};
