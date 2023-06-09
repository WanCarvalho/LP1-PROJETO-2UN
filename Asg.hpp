#ifndef _ASG_HPP
#define _ASG_HPP

#include <string>

#include "util.hpp"
#include "Pessoa.hpp"
#include "Funcionario.hpp"

class Asg : public Pessoa, public Funcionario
{

    float adicionalInsalubridade;

public:
    Asg();
    Asg(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
        std::string estadoCivil, int qtdFilhos, std::string salario, std::string matricula,
        Data ingressoEmpresa, float adicionalInsalubridade);

    /* GETTERS */
    float getAdicionalInsalubridade();

    /* SETTERS */
    void setAdicionalInsalubridade(float adicionalInsalubridade);

    /* MÉTODOS */
    virtual float calcularSalario(int diasFaltas);
    virtual float calcularRescisao(Data desligamento);
};

#endif