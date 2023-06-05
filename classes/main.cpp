#include <iostream>

class House {

private:
    int numRooms = 5;
    float size = 1200;
    bool isAvaible {true};


public:
    void showSize();
    int getNumberRooms();
    bool avaiable();
    void setNumRooms(int num);
};



int main() {

    House beachHouse;
    beachHouse.showSize();
    beachHouse.setNumRooms(2);
    std::cout << "Numbers of Rooms: " << beachHouse.getNumberRooms()<<std::endl <<std::endl;
    std::cout << "This house is avaiable ? "<< std::endl << (beachHouse.avaiable() ? "Yes" :"No") << std::endl << std::endl;
    return 0;
}

void House::showSize(){
    std::cout << "Size: " << size << " milimeters" <<std::endl;
}

bool House:: avaiable(){
    return isAvaible;
}

void House::setNumRooms(int num) {
    if ((num <= 6) && (num >= 0 )) {
        numRooms = num;
    }
    else {
        std::cout << "Numero de quartos invalidos" << std::endl;
    }
}

int House::getNumberRooms(){
    return numRooms;
}