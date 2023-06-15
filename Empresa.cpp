#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Asg.hpp"
#include "Empresa.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Pessoa.hpp"
#include "Vendedor.hpp"
#include "util.hpp"

Empresa::Empresa() {}

Empresa::Empresa(std::string nomeEmpresa, std::string cnpj,
                 float faturamentoMensal) {
  this->nomeEmpresa = nomeEmpresa;
  this->cnpj = cnpj;
  this->faturamentoMensal = faturamentoMensal;
}

/* GETTERS */
float Empresa::getFaturamentoMensal() { return this->faturamentoMensal; }

std::string Empresa::getNomeEmpresa() { return this->nomeEmpresa; }

std::string Empresa::getCNPJ() { return this->cnpj; }

Pessoa Empresa::getDono() { return this->dono; }

vector<Asg> Empresa::getAsg() { return this->asgs; }

vector<Gerente> Empresa::getGerente() { return this->gerentes; }

vector<Vendedor> Empresa::getVendedor() { return this->vendedores; }

/* SETTERS */
void Empresa::setNomeEmpresa(std::string nomeEmpresa) {
  this->nomeEmpresa = nomeEmpresa;
}

void Empresa::setCNPJ(std::string cnpj) { this->cnpj = cnpj; }

void Empresa::setFaturamentoMensal(float faturamentoMensal) {
  this->faturamentoMensal = faturamentoMensal;
}

/* MÉTODOS */
void Empresa::carregaFuncoes() {
  carregarEmpresa();
  carregarAsg();
  carregarVendedor();
  carregarGerente();
  carregarDono();
  imprimeAsgs();
  imprimeVendedores();
  imprimeGerentes();
  imprimeDono();
  calculaTodosOsSalarios();
}

void Empresa::carregarEmpresa() {

  std::ifstream inputFile("empresa.txt");
  if (!inputFile) {
    std::cout << "Erro ao abrir o arquivo." << std::endl;
  }

  std::string linha;
  int linhaAtual = 0;

  while (std::getline(inputFile, linha)) {
    if (linhaAtual == 2) {
      this->nomeEmpresa = linha;
    } else if (linhaAtual == 3) {
      this->cnpj = linha;
    } else if (linhaAtual == 4) {
      this->faturamentoMensal = std::stof(linha);
    }

    linhaAtual++;
  }

  inputFile.close();
}

void Empresa::carregarAsg();
void Empresa::carregarVendedor();
void Empresa::carregarGerente();
void Empresa::carregarDono();

void Empresa::imprimeAsgs() {

  cout << "ASG N°: 0" << endl;
  cout << "Nome: " << asgs[0].getNome() << endl;
  cout << "CPF: " << asgs[0].getCpf() << endl;
  cout << "Filhos: " << asgs[0].getQtdFilhos() << endl;
  cout << "Estado Civil: " << asgs[0].getEstadoCivil() << endl;
  // cout << "Endereco: " << asgs[0].getEnderecoPessoal() << endl;
  // cout << "Data de Nascimento: " << asgs[0].getDataNascimento() << endl;
  cout << "Matricula: " << asgs[0].getMatricula() << endl;
  cout << "Salario: " << asgs[0].getSalario() << endl;
  cout << "Insalubridade: " << asgs[0].getAdicionalInsalubridade() << "%"
       << endl;
  cout << "Faltas: " << endl;
  // cout << "Data Ingresso: " << asgs[0].getIngressoEmpresa() << endl;
  cout << "##############################################\n\n";
}

void Empresa::imprimeVendedores() {

  cout << "VENDEDOR N°: 0" << endl;
  cout << "Nome: " << vendedores[0].getNome() << endl;
  cout << "CPF: " << vendedores[0].getCpf() << endl;
  cout << "Filhos: " << vendedores[0].getQtdFilhos() << endl;
  cout << "Estado Civil: " << vendedores[0].getEstadoCivil() << endl;
  // cout << "Endereco: " << vendedores[0].getEnderecoPessoal() << endl;
  // cout << "Data de Nascimento: " << vendedores[0].getDataNascimento() <<
  // endl;
  cout << "Matricula: " << vendedores[0].getMatricula() << endl;
  cout << "Salario: " << vendedores[0].getSalario() << endl;
  cout << "Categoria: " << vendedores[0].getTipoVendedor() << endl;
  cout << "Faltas: " << endl;
  // cout << "Data Ingresso: " << vendedores[0].getIngressoEmpresa() << endl;
  cout << "##############################################\n\n";
}

void Empresa::imprimeGerentes() {

  cout << "GERENTE N°: 0" << endl;
  cout << "Nome: " << gerentes[0].getNome() << endl;
  cout << "CPF: " << gerentes[0].getCpf() << endl;
  cout << "Filhos: " << gerentes[0].getQtdFilhos() << endl;
  cout << "Estado Civil: " << gerentes[0].getEstadoCivil() << endl;
  // cout << "Endereco: " << gerentes[0].getEnderecoPessoal() << endl;
  // cout << "Data de Nascimento: " << gerentes[0].getDataNascimento() << endl;
  cout << "Matricula: " << gerentes[0].getMatricula() << endl;
  cout << "Salario: " << gerentes[0].getSalario() << endl;
  cout << "Participação: " << gerentes[0].getParticipacaoLucros() << "%"
       << endl;
  cout << "Faltas: " << endl;
  // cout << "Data Ingresso: " << gerentes[0].getIngressoEmpresa() << endl;
  cout << "##############################################\n\n";
}

void Empresa::imprimeDono() {
  cout << "Nome: " << dono.getNome() << endl;
  cout << "CPF: " << dono.getCpf() << endl;
  cout << "Filhos: " << dono.getQtdFilhos() << endl;
  cout << "Estado Civil: " << dono.getEstadoCivil() << endl;
  // cout << "Endereço: " << dono.getEnderecoPessoal() << endl;
  // cout << "Data de Nascimento: " << dono.getDataNascimento() << endl;
  cout << "##############################################\n\n";
}

void Empresa::buscaFuncionario(int matricula);
void Empresa::calculaSalarioFuncionario(int matricula);
void Empresa::calculaTodosOsSalarios();
void Empresa::calcularRescisao(int matricula, Data desligamento);