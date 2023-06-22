#ifndef MENUCHEFE_H
#define MENUCHEFE_H

#include "Funcionario.h"
#include <vector>
#include <iostream>

using namespace std;

class MenuChefe {
public:
    Funcionario* MenuChefe::cadastrarFuncionario();
    void MenuChefe::listarFuncionarios(const vector<Funcionario*> &funcionarios);
    void MenuChefe::checarPonto(Funcionario &funcionario);

};

#endif