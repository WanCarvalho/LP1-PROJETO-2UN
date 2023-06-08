#ifndef _UTIL_HPP
#define _UTIL_HPP

#include <iostream>
#include <string.h>

typedef struct
{
    int ano;
    int mes;
    int dia;

} Data;

typedef struct
{
    string cidade;
    string bairro;
    string rua;
    string cep;
    int numero;
} Endereco;

class Pessoa
{
    string nome;
    string cpf;
    Data dataNascimento;
    Endereco enderecoPessoal;
    string estadoCivil;
    int qtdFilhos;

public:
    Pessoa() {}

    Pessoa(string nome, string cpf, Data dataNascimento, Endereco enderecoPessoal, string estadoCivil, int qtdFilhos)
    {
        this->nome = nome;
        this->cpf = cpf;
        this->dataNascimento = dataNascimento;
        this->enderecoPessoal = enderecoPessoal;
        this->estadoCivil = estadoCivil;
        this->qtdFilhos = qtdFilhos;
    }

    string getNome()
    {
        return this->nome;
    }

    string getCpf()
    {
        return this->cpf;
    }

    Data getDataNascimento()
    {
        return this->dataNascimento;
    }

    Endereco getEnderecoPessoal()
    {
        return this->enderecoPessoal;
    }

    string getEstadoCivil()
    {
        return this->estadoCivil;
    }

    int getQtdFilhos()
    {
        return this->qtdFilhos;
    }

    /*SETTERS*/

    void setNome(string nome)
    {
        this->nome = nome;
    }

    void setCpf(string cpf)
    {
        this->cpf = cpf;
    }

    void setDataNascimento(int dia, int mes, int ano)
    {
        this->dataNascimento.dia = dia;
        this->dataNascimento.mes = mes;
        this->dataNascimento.ano = ano;
    }

    void setEnderecoPessoal(Endereco enderecoPessoal)
    {
        this->enderecoPessoal = enderecoPessoal;
    }

    void setEstadoCivil(string estadoCivil)
    {
        this->estadoCivil = estadoCivil;
    }

    void setQtdFilhos(int qtdFilhos)
    {
        this->qtdFilhos = qtdFilhos;
    }
};

class Funcionario
{
    string salario;
    string matricula;
    Data ingressoEmpresa;

public:
    string getSalario()
    {
        return this->salario;
    }

    string getMatricula()
    {
        return this->matricula;
    }

    Data getIngressoEmpresa()
    {
        return this->ingressoEmpresa;
    }

    // SETTERS

    void setSalario(string salario)
    {
        this->salario = salario;
    }

    void setMatricula(string matricula)
    {
        this->matricula = matricula;
    }

    void setIngressoEmpresa(Data ingressoEmpresa)
    {
        this->ingressoEmpresa = ingressoEmpresa;
    }
};

#endif