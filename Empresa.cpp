#include <iostream>
#include <string>

using namespace std;

#include "Empresa.hpp"

Empresa::Empresa()
{
}

Empresa::Empresa(std::string nomeEmpresa, std::string cnpj, float faturamentoMensal)
{
    this->nomeEmpresa = nomeEmpresa;
    this->cnpj = cnpj;
    this->faturamentoMensal = faturamentoMensal;
}

/* GETTERS */
std::string Empresa::getNomeEmpresa()
{
    return this->nomeEmpresa;
}

std::string Empresa::getCNPJ()
{
    return this->cnpj;
}

Pessoa Empresa::getDono()
{
    return this->dono;
}

Asg Empresa::getAsg()
{
    return this->asgs;
}

Gerente Empresa::getGerente()
{
    return this->gerentes;
}

Vendedor Empresa::getVendedor()
{
    return this->vendedores;
}

/* SETTERS */
void Empresa::setNomeEmpresa(std::string nomeEmpresa)
{
    this->nomeEmpresa = nomeEmpresa;
}

void Empresa::setCNPJ(std::string cnpj)
{
    this->cnpj = cnpj;
}

void Empresa::setFaturamentoMensal(float faturamentoMensal)
{
    this->faturamentoMensal = faturamentoMensal;
}

/* MÉTODOS */
void Empresa::carregaFuncoes();
void Empresa::carregarEmpresa();
void Empresa::carregaAsg();
void Empresa::carregaVendedor();
void Empresa::carregaGerente();
void Empresa::carregaDono();

void Empresa::imprimeAsgs();
void Empresa::imprimeVendedores();
void Empresa::imprimeGerentes();
void Empresa::imprimeDono();
void Empresa::buscaFuncionario(int matricula);
void Empresa::calculaSalarioFuncionario(int matricula);
void Empresa::calculaTodosOsSalarios();
void Empresa::calcularRescisao(int matricula, Data desligamento);