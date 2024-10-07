#include <iostream>
#include <string>

void arrayFilling(std::string array[], int size){
    std::cout << "Enter the names of the occupants:\n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    
}

void apartmentNumberInformation(const std::string array[], int size) {
    for (int i = 0; i < 3; ++i) {
        int num;
        std::cout << "Enter the apartment number (1 to " << size << "): ";
        std::cin >> num;

        if (num < 1 || num > size) {
            std::cout << "Incorrect value entered! The number must be between 1 and " << size << ".\n";
        }
        else {
            std::cout << "Occupant of apartment " << num << ": " << array[num - 1] << std::endl;
        }
    }
}

int main(){
    const int size = 10;
    std::string surnames[size];

    arrayFilling(surnames, size);
    apartmentNumberInformation(surnames,size);
}