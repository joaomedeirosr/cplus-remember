#include <iostream>


int main() {

    int num {102};

    int *ptr = &num;





    std::cout << "Valor da variavel numero: " << num << std::endl;
    std::cout << "Valor da variavel ptr: " << ptr << std::endl;
    std::cout << "Valor do endereco de memoria de numero " << &num << std::endl;
    std::cout << "Valor que ptr esta carregado na memoria RAM: " << &ptr << std::endl;
    std::cout << "Valor contido na variavel apontada por ptr: " << *ptr << std::endl;


    *ptr = 20963;


    std::cout << "Valor contido na variavel que ptr aponta: " << *ptr << std::endl;

    return 0;
}
