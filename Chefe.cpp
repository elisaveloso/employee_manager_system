#include "Chefe.h"

Chefe::Chefe(string nome, string usuario, string senha)
    : Pessoa(nome), usuario(usuario), senha(senha) {}

Chefe::~Chefe() {}

string Chefe::getUsuario() const{
    return usuario;
}

void Chefe::setUsuario(string usuario){
    this->usuario = usuario;
}

string Chefe::getSenha() const{
    return senha;
}

void Chefe::setSenha(string senha){
    this->senha = senha;
}

bool Chefe::verificarAutenticacao(string usuario, string senha){
    return (this->usuario == usuario && this->senha == senha);
}

