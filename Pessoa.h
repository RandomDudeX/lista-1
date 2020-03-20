#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

class Pessoa
{
    public:
        SetNome();
        GetNome();
        SetIdade();
        GetIdade();
        SetTelefone();
        GetTelefone();



    private:
        Pessoa();
        virtual ~Pessoa();
        std::string nome;
        int idade;
        std::string telefone;
};

#endif
