#include <iostream>


int main (){
    int numVidas = 5;
    int Score = 1350;


    std::cout   << "Early game" << std::endl;

    std::cout   << "Numero de vidas do jogador:"<<  " " << numVidas << std::endl;
    std::cout   << "Numero de pontos do jogador:"<< " " << Score << std::endl;
    std::cout   << "Endereco da variavel 'numVidas':"<< " "  << &numVidas << std::endl;
    std::cout   << "Endereco da variavel Score"<<" "<< &Score << std::endl;


    std::cout   << "Mid Game" << std::endl;

    int currentScore = Score + 150;
    int currentNumVidas = numVidas - 1;

    std::cout << "A a pontucao atual do jogador é: " << currentScore << " " << std::endl;
    std::cout << "O contador de vidas do jogar esta em: " << currentNumVidas << " " << std::endl;




}