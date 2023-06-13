#include <iostream>
#include <string>

using namespace std;

#include "Empresa.hpp"
#include "Asg.hpp"
#include "Gerente.hpp"
#include "Vendedor.hpp"
#include "Pessoa.hpp"
#include "Funcionario.hpp"
#include "util.hpp"

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

void Empresa::imprimeAsgs(){

    cout << "ASG No: 0" << endl;
    cout << "Nome: " << Asg::getNome(0) << endl;
    cout << "CPF: " << Asg::getCpf(0) << endl;
    cout << "Filhos: " << Asg::getQtdFilhos(0) << endl;
    cout << "Estado Civil: " << Asg::getEstadoCivil() << endl;
    cout << "Endereco: " << Asg::getEnderecoPessoal() << endl;
    cout << "Data de Nascimento: " << Asg::getDataNascimento() << endl;
    cout << "Matricula: " << Asg::getMatricula() << endl;
    cout << "Salario: " << Asg::getSalario() << endl;
    cout << "Insalubridade: " << Asg::getAdicionalInsalubridade() << "%" << endl;
    cout << "Faltas: " << endl;
    cout << "Data Ingresso: " << Asg::getIngressoEmpresa() << endl;
    cout << "##############################################\n\n";

}

void Empresa::imprimeVendedores(){

    cout << "ASG No: 0" << endl;
    cout << "Nome: " << Vendedor::getNome(0) << endl;
    cout << "CPF: " << Vendedor::getCpf(0) << endl;
    cout << "Filhos: " << Vendedor::getQtdFilhos(0) << endl;
    cout << "Estado Civil: " << Vendedor::getEstadoCivil() << endl;
    cout << "Endereco: " << Vendedor::getEnderecoPessoal() << endl;
    cout << "Data de Nascimento: " << Vendedor::getDataNascimento() << endl;
    cout << "Matricula: " << Vendedor::getMatricula() << endl;
    cout << "Salario: " << Vendedor::getSalario() << endl;
    cout << "Categoria: " << Vendedor::getTipoVendedor() << endl;
    cout << "Faltas: " << endl;
    cout << "Data Ingresso: " << Vendedor::getIngressoEmpresa() << endl;
    cout << "##############################################\n\n";

}


void Empresa::imprimeGerentes(){

    cout << "ASG No: 0" << endl;
    cout << "Nome: " << Gerente::getNome(0) << endl;
    cout << "CPF: " << Gerente::getCpf(0) << endl;
    cout << "Filhos: " << Gerente::getQtdFilhos(0) << endl;
    cout << "Estado Civil: " << Gerente::getEstadoCivil() << endl;
    cout << "Endereco: " << Gerente::getEnderecoPessoal() << endl;
    cout << "Data de Nascimento: " << Gerente::getDataNascimento() << endl;
    cout << "Matricula: " << Gerente::getMatricula() << endl;
    cout << "Salario: " << Gerente::getSalario() << endl;
    cout << "Participação: " << Gerente::getParticipacaoLucros() << "%" << endl;
    cout << "Faltas: " << endl;
    cout << "Data Ingresso: " << Gerente::getIngressoEmpresa() << endl;
    cout << "##############################################\n\n";

}

void Empresa::imprimeDono(){

    cout << "Nome: " << dono.getNome() << endl;
    cout << "CPF: " << dono.getCpf() << endl;
    cout << "Filhos: " << dono.getQtdFilhos() << endl;
    cout << "Estado Civil: " << dono.getEstadoCivil() << endl;
    cout << "Endereço: " << dono.getEnderecoPessoal() << endl;
    cout << "Data de Nascimento: " << dono.getDataNascimento() << endl;
    cout << "##############################################\n\n";

}

void Empresa::buscaFuncionario(int matricula);
void Empresa::calculaSalarioFuncionario(int matricula);
void Empresa::calculaTodosOsSalarios();
void Empresa::calcularRescisao(int matricula, Data desligamento);