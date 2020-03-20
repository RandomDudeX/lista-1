#include "Pessoa.h"
#include <string>
#include <iostream>
#include <stdio.h>


using namespace std;

Pessoa::Pessoa(string nome)
{
    this->nome = nome;
}

Pessoa::Pessoa(string nome, int idade, string telefone)
{
    this->nome = nome;
    this->idade = idade;
    this->telefone = telefone;
}

void Pessoa::SetNome(string nome){
    this->nome = nome; }

string Pessoa::GetNome() {return nome;}

void Pessoa::SetIdade(int idade){
    this->idade = idade; }

int Pessoa::GetIdade() {return idade;}

void Pessoa::SetTelefone(string telefone){
    this->telefone = telefone; }

string Pessoa::GetTelefone() {return telefone;}

Pessoa::~Pessoa() = default;
