#ifndef _FUNCIONARIO_HPP
#define _FUNCIONARIO_HPP

#include <string>

#include "util.hpp"

class Funcionario
{

    std::string salario;
    std::string matricula;
    Data ingressoEmpresa;

public:
    /* GETTERS */
    std::string getSalario();

    std::string getMatricula();

    Data getIngressoEmpresa();

    /*SETTERS*/

    void setSalario(std::string salario);

    void setMatricula(std::string matricula);

    void setIngressoEmpresa(int ano, int mes, int dia);

    /* MÉTODOS */
    virtual float calcularSalario(int diasFaltas);
    virtual float calcularRescisao(Data desligamento);
};

#endif