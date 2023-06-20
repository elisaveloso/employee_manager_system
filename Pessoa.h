#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
public:
    Pessoa(string);
    virtual ~Pessoa();

    string getNome() const;
    void setNome(string nome);
};

#endif