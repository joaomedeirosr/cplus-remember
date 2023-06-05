#include <iostream>
#include <array>

void showVector(int *ptr, int length);
void changeVector(int array[], int length);


int main() {
    int vector [] {1,2,3,4,5,6,7,8,9,10};
    int length = std::size(vector);

    std::cout << "Vetor original" <<std::endl;

    showVector(vector,length);
    std::cout<<std::endl;

    changeVector(vector,length);
    std::cout << "Vetor alterado" <<std::endl;
    showVector(vector,length);
    return 0;
}


void showVector(int *ptr, int length){
    for(int i = 0; i < length; i++){
        std::cout<< " "<< ptr[i];
    }

}

void changeVector(int array[], int length){
    for(int i = 0; i < length; i++){
        array[i] = 2 * array[i];
    }

}