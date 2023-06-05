#include <iostream>
#include <array>
#include <iomanip>

int main() {
    double notas [] {9.6,4.9, 9.5 , 5.6, 2.5,6.4,7.5, 9.8, 8.7, 10.0};
    float media;
    double somaNotas;
    int length;

    length = std::size(notas);


    for(auto grades : notas){
        somaNotas += grades;
    }

    media = somaNotas / length;


    std::cout << "A media das notas do aluno é:" << std::fixed << std::setprecision(2)<< media << std::endl;
    return 0;
}
