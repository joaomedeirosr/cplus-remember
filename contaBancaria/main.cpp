#include <iostream>
#include "contaBancaria.h"
#include <string>


bool Conta::sacar(double valor) {

    if(saldo < valor) {
        std::cout << "Saldo insuficiente"<<std::endl;
        std::cout << "Seu saldo Atual é: R$" << consultarSaldo();
    }

    else {
        saldo = saldo - valor;
        std::cout << "Seu saldo atual e: R$" << consultarSaldo();
    }

    return true;
}


void Conta::depositar(double valor) {

    saldo = saldo + valor;
    std::cout << "Deposito de R$ " << valor << "efetuado com sucesso!"<<std::endl;
}


void Conta::transferir(Conta Destino, double valor) {

    if ( saldo < valor) {
        std::cout<< "Saldo insuficiente para transferir"<< "seu saldo é de: " << consultarSaldo() <<std::endl;
    }

    else {
        Destino.depositar(valor);
        saldo -= valor;


        std::cout << " Dados bancários da transferencia: " << std::endl;
        std::cout << " Titular da conta: " << Destino.gettitular()<< std::endl;
        std::cout << " Banco: " << Destino.getbanco()<< std::endl;
        std::cout << " Agencia: " << Destino.getagencia()<< std::endl;
        std::cout << " Conta: " << Destino.getnumConta()<< std::endl;
        std::cout << " Transferencia realizada com sucesso! " << std::endl;
        std::cout << "Seu saldo atual e: R$" << consultarSaldo();

    }
}

/*Criando os metodos get, para pegar os atributos(variaveis) da classe
  e retornar ou usar elas de alguma maneira.
*/
double Conta::consultarSaldo() {
    return saldo;
}

std::string Conta::getbanco() {
    return banco;
}

int Conta::getagencia() {
    return agencia;
}

int Conta::getnumConta() {
    return numConta;
}

std::string Conta::gettitular() {
    return titular;
}

/*Criando os metodos set, para pegar os atributos(variaveis) da classe
   e modoficiar o valor destes atributos para usa-los de alguma meneira.
*/

void Conta::setbanco(std::string banco) {

}

void Conta::setagencia(int agencia) {

}

void Conta::setTitular(std::string titular) {

}

int main() {
    //Conta Destino;
    std::cout << "Hello, World!"<<std::endl;
    return 0;
}
