#include <iostream>
#include <array>
void doubleVector(int *array, int length);
int *invertVector(int *array, int length);
void showVector(int *array, int length);



int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int length = std::size(numbers);


    std::cout << "O vetor e composto por: " << numbers << std::endl;
    std:: cout<< "O tamanho do vetor é: " << length << std::endl;


    showVector(numbers,length);
    doubleVector(numbers,length);
    showVector(numbers,length);
    showVector(invertVector(numbers,length),length);

    return 0;
}



void doubleVector(int *array, int length) {

    for(int i = 0; i< length; i++) {
        array[i] = 2 * array[i];

        }
}

int *invertVector(int *array, int length) {

    int j = 0;
    static int invertedArray[10];

    for(int i = length - 1; i >=0; i--){
        invertedArray[j] = array[i];
        j++;
   }

    return invertedArray;
}

void showVector(int *array , int length) {
    std::cout<< "[" << std::endl;

    for(int i = 0; i < length; i++){
        std::cout << "  "<< array[i];
    }
    std::cout<< "]" <<std::endl << std::endl;
}
