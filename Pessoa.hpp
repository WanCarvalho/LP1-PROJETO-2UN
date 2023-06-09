#ifndef _PESSOA_HPP
#define _PESSOA_HPP

#include <string>
#include "util.hpp"

class Pessoa
{
    std::string nome;
    std::string cpf;
    Data dataNascimento;
    Endereco enderecoPessoal;
    std::string estadoCivil;
    int qtdFilhos;

public:
    Pessoa();

    Pessoa(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
           std::string estadoCivil, int qtdFilhos);

    /* GETTERS */
    std::string getNome();

    std::string getCpf();

    Data getDataNascimento();

    Endereco getEnderecoPessoal();

    std::string getEstadoCivil();

    int getQtdFilhos();

    /*SETTERS*/

    void setNome(std::string nome);

    void setCpf(std::string cpf);

    void setDataNascimento(Data dataNascimento);

    void setEnderecoPessoal(Endereco enderecoPessoal);

    void setEstadoCivil(std::string estadoCivil);

    void setQtdFilhos(int qtdFilhos);
};

#endif