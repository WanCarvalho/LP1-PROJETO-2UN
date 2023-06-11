#include <iostream>
#include <string>

#include "Gerente.hpp"

Gerente::Gerente() {}

Gerente::Gerente(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
                 std::string estadoCivil, int qtdFilhos, std::string salario, std::string matricula,
                 Data ingressoEmpresa, float participacaoLucros)
{
    this->participacaoLucros = participacaoLucros;
}

/* GETTERS */
float Gerente::getParticipacaoLucros()
{
    return this->participacaoLucros;
}

/* SETTERS */
void Gerente::setParticipacaoLucros(float participacaoLucros)
{
    this->participacaoLucros = participacaoLucros;
}

/* MÉTODOS */
virtual float calcularSalario(int diasFaltas);
virtual float calcularRescisao(Data desligamento);