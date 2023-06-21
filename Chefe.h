#ifndef CHEFE_H
#define CHEFE_H

#include "Pessoa.h"

class Chefe : public Pessoa{
// será necessário algum atributo do chefe??
public:
    Chefe(string nome, string usuario, string senha);
    virtual ~Chefe();
    //void abrirMenuChefe(bool chefeAutenticado);
};

#endif