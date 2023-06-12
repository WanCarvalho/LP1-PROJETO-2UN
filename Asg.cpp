#include <iostream>
#include <string>

#include "Asg.hpp"
#include "Funcionario.hpp"
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
float Asg::calcularSalario(int diasFaltas)
{
    this->salario -= (salario / 22) * diasFaltas; // calcula a diária com base em 22 dias trabalhados
    this->salario += salario * adicionalInsalubridade;
    this->salario += salario + (qtdFilhos * 100); // acresce em R$100 o valor do salário a cada filho
}

float Asg::calcularRescisao(Data desligamento)
{
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