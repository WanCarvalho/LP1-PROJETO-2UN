#include <iostream>
#include <string>

using namespace std;

#include "Funcionario.hpp"

/* GETTERS */
std::string Funcionario::getSalario()
{
    return this->salario;
}

std::string Funcionario::getMatricula()
{
    return this->matricula;
}

Data Funcionario::getIngressoEmpresa()
{
    return this->ingressoEmpresa;
}

/* SETTERS */

void Funcionario::setSalario(std::string salario)
{
    this->salario = salario;
}

void Funcionario::setMatricula(std::string matricula)
{
    this->matricula = matricula;
}

void Funcionario::setIngressoEmpresa(int ano, int mes, int dia)
{
    this->ingressoEmpresa.ano = ano;
    this->ingressoEmpresa.mes = mes;
    this->ingressoEmpresa.dia = dia;
}

/* MÉTODOS */
float Funcionario::calcularSalario(int diasFaltas);
float Funcionario::calcularRescisao(Data desligamento);