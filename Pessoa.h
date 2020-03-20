#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

class Pessoa
{
    public:
        Pessoa();
        virtual ~Pessoa();
        std::string nome;
        int idade;
        std::string telefone;

    private:
};

#endif
