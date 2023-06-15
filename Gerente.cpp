#include <iostream>
#include <string>

#include "Gerente.hpp"
#include "Funcionario.hpp"
#include "Pessoa.hpp"

using namespace std;

Gerente::Gerente() {}

Gerente::Gerente(std::string nome, std::string cpf, Data dataNascimento, Endereco enderecoPessoal,
                 std::string estadoCivil, int qtdFilhos, std::string salario, std::string matricula,
                 Data ingressoEmpresa, float participacaoLucros)
{
    this->participacaoLucros = participacaoLucros;
}

/* GETTERS */
float Gerente::getParticipacaoLucros()
{
    return this->participacaoLucros;
}

/* SETTERS */
void Gerente::setParticipacaoLucros(float participacaoLucros)
{
    this->participacaoLucros = participacaoLucros;
}

/* MÉTODOS */
float Gerente::calcularSalario(int diasFaltas){

    float salario = std::stof(getSalario()); // converte string para float

    float participacaoLucros = getParticipacaoLucros();

    salario -= (salario / 22) * diasFaltas; // calcula a diária com base em 22 dias trabalhados
    salario += salario * participacaoLucros;
    salario += salario + (getQtdFilhos() * 100); // acresce em R$100 o valor do salário a cada filho

    return salario;

}

float Gerente::calcularRescisao(Data desligamento){

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