#ifndef CHEFE_H
#define CHEFE_H

#include "Pessoa.h"

class Chefe : public Pessoa{
private:
    string usuario;
    string senha;

public:
    Chefe(string, string, string);
    virtual ~Chefe();

    string getUsuario() const;
    void setUsuario(string usuario);

    string getSenha() const;
    void setSenha(string senha);

    bool verificarAutenticacao(string usuario, string senha);

};

#endif