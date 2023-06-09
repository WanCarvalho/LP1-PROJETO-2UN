#include <string>
#include <iostream>

#include "util.hpp"
#include "Pessoa.hpp"

using namespace std;

Pessoa::Pessoa() {}

Pessoa::Pessoa(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal, std::string estadoCivil, int qtdFilhos)
{
    this->nome = nome;
    this->cpf = cpf;
    this->dataNascimento = dataNascimento;
    this->enderecoPessoal = enderecoPessoal;
    this->estadoCivil = estadoCivil;
    this->qtdFilhos = qtdFilhos;
}

/* GETTERS */

std::string Pessoa::getNome()
{
    return this->nome;
}

std::string Pessoa::getCpf()
{
    return this->cpf;
}

Data Pessoa::getDataNascimento()
{
    return this->dataNascimento;
}

Endereco Pessoa::getEnderecoPessoal()
{
    return this->enderecoPessoal;
}

std::string Pessoa::getEstadoCivil()
{
    return this->estadoCivil;
}

int Pessoa::getQtdFilhos()
{
    return this->qtdFilhos;
}

/*SETTERS*/

void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
}

void Pessoa::setCpf(std::string cpf)
{
    this->cpf = cpf;
}

void Pessoa::setDataNascimento(Data dataNascimento)
{
    this->dataNascimento = dataNascimento;
}

void Pessoa::setEnderecoPessoal(Endereco enderecoPessoal)
{
    this->enderecoPessoal = enderecoPessoal;
}

void Pessoa::setEstadoCivil(std::string estadoCivil)
{
    this->estadoCivil = estadoCivil;
}

void Pessoa::setQtdFilhos(int qtdFilhos)
{
    this->qtdFilhos = qtdFilhos;
}