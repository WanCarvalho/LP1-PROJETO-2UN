#ifndef _UTIL_HPP
#define _UTIL_HPP

#include <string.h>

typedef struct Data
{
    int ano;
    int mes;
    int dia;

} Data;

typedef struct Endereco
{
    std::string cidade;
    std::string bairro;
    std::string rua;
    std::string cep;
    int numero;

} Endereco;

#endif