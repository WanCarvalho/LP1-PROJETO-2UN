#include <iostream>
#include <string>

#include "Vendedor.hpp"

using namespace std;

Vendedor::Vendedor()
{
}

Vendedor::Vendedor(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
                   std::string estadoCivil, int qtdFilhos, std::string salario, std::string matricula,
                   Data ingressoEmpresa, char tipoVendedor)
{

    this->tipoVendedor = tipoVendedor;
}

/* GETTERS */
char Vendedor::getTipoVendedor()
{
    return this->tipoVendedor;
}

/* SETTERS */
void Vendedor::setTipoVendedor(char tipoVendedor)
{
    this->tipoVendedor = tipoVendedor;
}

/* MÉTODOS */
virtual float Vendedor::calcularSalario(int diasFaltas);
virtual float Vendedor::calcularRescisao(Data desligamento);