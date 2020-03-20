#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <numeric>
#include <cstdlib>
#include <sstream>
#include <stdio.h>
#include "Pessoa.h"

using namespace std;

int main()
{
    cout << "Essa e uma demo da classe pessoa" << endl;
    Pessoa p1("Marco");
    Pessoa p2("Claudio", 20, "12345678");

    cout << "Dados da pessoa 1:\n" << p1.nome << endl;
    cout << "Dados da pessoa 2:\n" << p2.nome << endl;
    cout << p2.idade << endl;
    cout << p2.telefone << endl;

    SetNome(p1.nome);
    SetNome(p2.nome);
    SetIdade(p2.idade);
    GetIdade(p2.idade);

    return 0;
}
