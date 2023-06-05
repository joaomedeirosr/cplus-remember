#include <iostream>

int main() {

    float num1,num2;

    std::cout<<"Digite a primeira nota"<< std::endl;
    std::cin >> num1;
    std::cout<<"Digite a segunda nota"<< std::endl;
    std::cin >> num2;

    float media;
    media = (num1 + num2)/2;



    std::cout <<"A sua média final é = " << media << std::endl;
    return 0;
}
