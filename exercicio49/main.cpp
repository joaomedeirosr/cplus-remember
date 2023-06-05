#include <iostream>

int main() {

    float x,y,z;

    std::cout << "Entre com a coordenada do ponto em X:" << std::endl;
    std::cin >> x;
    std::cout << "A coordenada para o exio 'X' digitada é: " << x << std::endl << std::endl;;



    std::cout << "Entre com a coordenada do ponto em Y:" << std::endl;
    std::cin >> y;
    std::cout << "A coordenada para o exio 'Y' digitada é: " << y << std::endl << std::endl;




    std::cout << "Entre com a coordenada do ponto em Z:" << std::endl;
    std::cin >> z;
    std::cout << "A coordenada para o exio 'Z' digitada é: " << z << std::endl << std::endl;;

    float media;

    media = (x+y+z) / 3;

    std::cout << "A media aritimética dos valores dos eixos é = " << media;
    return 0;
}
