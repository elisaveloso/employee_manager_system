#include "MenuChefe.h"

Funcionario* MenuChefe::cadastrarFuncionario() {
    /*ex digite nome
    cout << "Menu do Chefe" << endl;
    digite usuario
    digite senha
    digite salarioPorHora
    Funcionario* novoFuncionario = nullptr;

    digite a função 
    if(funcao == "vendedor")
        cria um objeto vendedor
        pergunto os parametros de vendedor
        novoFuncionario = new Vendedor(passo os parametros)
    
    else if (função == "supervisor")
        crio um objeto supervisor
        pergunto os param supervisor
        novoFuncionario = new Supervisor(...)
    else{
        botar uma exceção... qualquer coisa do tipo
        return nullptr; // retornar ponteiro nulo ( no caso no main precisa fazer uma verificação, se o ptr for nulo, não conseguimos criar o funcionario)
    }
    depois que for criado, é só retornar no main e dar um pushback no vetor do main em vendedor ou supervisor... será necessário um vetor de funcionarios também no main

    return novoFuncionario;
    */
   
}


void MenuChefe::listarFuncionarios(const vector<Funcionario*> &funcionarios){
    cout << "Lista de Funcionários:" << endl;
    for(const auto& funcionario : funcionarios){
        /* FAZER DEPOIS... acho que a sobrecarga de operador funciona assim...
        cout << "Nome: " << funcionario->getNome() << ", Função: " << funcionario->getFuncao() << endl;
        */
    }

    // Liberar a memória alocada para os funcionários (nao sei se ta escrito certo)
    for (auto& funcionario : funcionarios) {
    delete funcionario;


    /* IMPORTANTE -> ex de utilização no main

    vector<Funcionario*> funcionarios;
    funcionarios.push_back(new Vendedor("João", "Vendas", 5000.0));
    funcionarios.push_back(new Supervisor("Maria", "Supervisão", "Departamento A"));

    MenuChefe menu;
    menu.listarFuncionarios(funcionarios);

    */



}

void MenuChefe::checarPonto(Funcionario &funcionario){
    // exibir hrs trabalhadas, extras e pendentes de um funcionario
}

