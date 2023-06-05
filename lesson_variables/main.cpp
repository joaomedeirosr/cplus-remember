#include <iostream>

int main() {
    int age = 24;
    float peso = 80.3;
    double  molar = 20000000;
    char name = 'J';

    std::cout << "A idade do usuario é:" << " " << age << std::endl;
    std::cout << "O peso do usuario é:" << " " << peso << std::endl;
    std::cout << "A massa molar é de:" << " " << molar << std::endl;
    std::cout << "A primeira letra do nome é:" << " " << name << std::endl;


    std::cout << " <-------- Enderecos de memoria das variaveis -----> "<< std::endl;
    std::cout << "O endereco de age é:" << " " << &age << std::endl;
    std::cout << "O endereco de peso é:" << " " << &peso << std::endl;
    std::cout << "O endereco de molar é:" << " " << &molar << std::endl;
    std::cout << "O endereco de name é:" << " " << (void*)&name << std::endl;

    std::cout << " <-------- Tamanho das variaveis (Tamanho ocupado em Bytes da memoria RAM para guardar esta variavel) -----> "<< std::endl;

    std::cout << "O tamanho da variavel age é:" << " " << sizeof(age) << " " << "Bytes" << std::endl;
    std::cout << "O tamanho da variavel peso é:" << " " << sizeof(peso) << " " << "Bytes"<< std::endl;
    std::cout << "O tamanho da variavel molar é:" << " " << sizeof(molar) << " " << "Bytes"<< std::endl;
    std::cout << "O tamanho da variavel name é:" << " " << sizeof(name)<< " " << "Byte" << std::endl;
    return 0;
}
