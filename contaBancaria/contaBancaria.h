#pragma once
#include <iostream>
#include <string>


class Conta{

private:

    std::string banco;
    int agencia;
    int numConta;
    std::string titular;
    double saldo;


public:

    bool sacar(double valor);

    void depositar(double valor);

    void transferir(Conta depositar, double valor);

    double consultarSaldo();

    std::string getbanco();

    int getagencia();

    int getnumConta();

    std::string gettitular();

    void setbanco(std::string banco);

    void setagencia(int agencia);

    void setTitular (std::string titular);



};
