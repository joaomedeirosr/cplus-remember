#include <iostream>
#include <array>


void showVector(int vetor[], int lengthVector);


int main() {
    int vetor [] = {1,2,3,4,5,6,7,8,9,10};

    int lengthVector = std::size(vetor);

    std::cout << "O tamanho do vetor e: "<< lengthVector << std::endl;


    showVector(vetor,lengthVector);
}

void showVector(int vetor[], int lengthVector ) {
    for(int i = 0; i < lengthVector; i++){
        std::cout << " " << vetor[i] ;

    }
}