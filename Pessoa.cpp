#include "Pessoa.h"

Pessoa::Pessoa(string nome) : nome(nome) {}

Pessoa::~Pessoa(){}

string Pessoa::getNome() const{
    return nome;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}
