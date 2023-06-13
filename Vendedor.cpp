#include <iostream>
#include <string>

#include "Vendedor.hpp"

using namespace std;

Vendedor::Vendedor()
{
}

Vendedor::Vendedor(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
                   std::string estadoCivil, int qtdFilhos, std::string salario, std::string matricula,
                   Data ingressoEmpresa, char tipoVendedor)
{

    this->tipoVendedor = tipoVendedor;
}

/* GETTERS */
char Vendedor::getTipoVendedor()
{
    return this->tipoVendedor;
}

/* SETTERS */
void Vendedor::setTipoVendedor(char tipoVendedor)
{
    this->tipoVendedor = tipoVendedor;
}

/* MÉTODOS */
float Vendedor::calcularSalario(int diasFaltas){

    float salario = std::stof(getSalario()); // converte string para float

    float gratificacao;

    switch(tipoVendedor){
        case 'A':
            gratificacao = 0.25;
            break;
        case 'B':
            gratificacao = 0.10;
            break;
        case 'C':
            gratificacao = 0.05;
            break;
    }
    
    salario -= (salario / 22) * diasFaltas; // calcula a diária com base em 22 dias trabalhados
    salario += salario * gratificacao;
    salario += salario + (qtdFilhos * 100); // acresce em R$100 o valor do salário a cada filho

    return salario;

}

float Vendedor::calcularRescisao(Data desligamento){

    float salario = std::stof(getSalario()); // converte string para float

    float salarioBaseAnual = salario * 12;

    Data ingressoEmpresa = getIngressoEmpresa();

    // Cálculo do tempo de trabalho em anos, considerando as frações de meses e dias
    int anosTrabalhados = desligamento.ano - ingressoEmpresa.ano;
    float mesesFracionados = (desligamento.mes - ingressoEmpresa.mes) / 12;
    float diasFracionados = (desligamento.dia - ingressoEmpresa.dia) / 365;
    float tempoTrabalho = anosTrabalhados + mesesFracionados + diasFracionados;

    // Cálculo da rescisão
    float rescisao = salarioBaseAnual * tempoTrabalho;

    return rescisao;

}