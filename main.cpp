#include <iostream>
#include <string>
using namespace std;

#include "util.hpp"
#include "pessoa.hpp"
#include "Empresa.hpp"

int main()
{
    Empresa *atacadoDosCalcado = new Empresa("Atacado dos Calcados", "40.101.588/0001-98", 156289.56);

    atacadoDosCalcado->Empresa::carregaFuncoes();

    return 0;
}