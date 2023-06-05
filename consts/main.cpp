#include <iostream>

//#define NUMVIDAS 10


int main() {

    const int numVidas = 10;

    int totalVidas;

    totalVidas = numVidas - 5;

    std::cout << "O numero de vidas e "<< numVidas << std::endl;
    std::cout << "O numero total de vidas e "<< totalVidas << std::endl;
    return 0;
}
