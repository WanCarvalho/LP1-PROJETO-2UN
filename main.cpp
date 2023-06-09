#include <iostream>
#include <string>
using namespace std;

#include "util.hpp"
#include "pessoa.hpp"

int main()
{
    Pessoa pessoa1;

    pessoa1.setNome("wanderson");

    std::cout << pessoa1.getNome();

    return 0;
}