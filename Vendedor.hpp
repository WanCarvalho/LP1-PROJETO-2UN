#ifndef _VENDEDOR_HPP
#define _VENDEDOR_HPP

#include <string>

#include "util.hpp"
#include "Pessoa.hpp"
#include "Funcionario.hpp"

class Vendedor : public Pessoa, public Funcionario
{

    char tipoVendedor;

public:
    Vendedor();
    Vendedor(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
             std::string estadoCivil, int qtdFilhos, std::string salario, std::string matricula,
             Data ingressoEmpresa, char tipoVendedor);

    /* GETTERS */
    char getTipoVendedor();

    /* SETTERS */
    void setTipoVendedor(char tipoVendedor);

    /* MÉTODOS */
    virtual float calcularSalario(int diasFaltas);
    virtual float calcularRescisao(Data desligamento);
};

#endif