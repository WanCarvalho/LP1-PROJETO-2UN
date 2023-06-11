#ifndef _GERENTE_HPP
#define _GERENTE_HPP

#include <string>

#include "util.hpp"
#include "Pessoa.hpp"
#include "Funcionario.hpp"

class Gerente : public Pessoa, public Funcionario
{
    float participacaoLucros;

public:
    Gerente();
    Gerente(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
            std::string estadoCivil, int qtdFilhos, std::string salario, std::string matricula,
            Data ingressoEmpresa, float participacaoLucros);

    /* GETTERS */
    float getParticipacaoLucros();

    /* SETTERS */
    void setParticipacaoLucros(float participacaoLucros);

    /* MÉTODOS */
    virtual float calcularSalario(int diasFaltas);
    virtual float calcularRescisao(Data desligamento);
};

#endif