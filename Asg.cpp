#include <iostream>
#include <string>

#include "Asg.hpp"
#include "Pessoa.hpp"

using namespace std;

Asg::Asg() {}

Asg::Asg(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal, std::string estadoCivil,
         int qtdFilhos, std::string salario, std::string matricula, Data ingressoEmpresa, float adicionalInsalubridade)
{
    this->adicionalInsalubridade = adicionalInsalubridade;
}

/* GETTERS */
float Asg::getAdicionalInsalubridade()
{
    return this->adicionalInsalubridade;
}

/* SETTERS */
void Asg::setAdicionalInsalubridade(float adicionalInsalubridade)
{
    this->adicionalInsalubridade = adicionalInsalubridade;
}

/* MÉTODOS */
virtual float calcularSalario(int diasFaltas);
virtual float calcularRescisao(Data desligamento);