// Created by Joao Victor on 13/03/23.

#include <iostream>
#include <string>

int main(){
    int favorite_number;
    std::cout << "Digite seu número favorito entre 1 e 100" << std::endl;
    std::cin >> favorite_number;
    std::cout << "Incrivél este também é meu número favorito" <<std::endl;

    std::string s = "Nao acredito"   " "+ std::to_string(favorite_number) +  " " + "é meu número favorito";

    std::cout << s<< std::endl;
    return 0;
}