#include <iostream>


int main() {

    float velocidade [] { 70.9,
                          89.5,
                          65.6,
                          102.5,
                          123.6 ,
                          63.4,
                          74.5,
                          99.5,
                          68.7
                        };

    float somaVelocidades {0.0};
    float media;
    float length {0.0};

    for( auto pVelocidade : velocidade){
            somaVelocidades += pVelocidade;
            length++;
    }

     media = (somaVelocidades)/length;

    std::cout << "A velocidade média da rodovia é: " << media << " km/h "<< std::endl;
    return 0;
}
