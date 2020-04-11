#include <iostream>

// User-defined types: three broad categories 1. enumerations, classes, unions
enum class Race {
    Dinan,
    Teklan,
    Ivyn,
    Moiran,
    Camite,
    Julian,
    Aidan
};

int main() {
    Race langobard_race = Race::Julian;

    switch(langobard_race) {
        case Race::Dinan: {
            std::cout << "You work, hard." << std::endl;
        } break;
        case Race::Teklan: {
            std::cout << "You are very strong." << std::endl;
        } break;
        case Race::Ivyn: {
            std::cout << "You are a great leader." << std::endl;
        } break;
        case Race::Moiran: {
            std::cout << "My, how versatile you are!" << std::endl;
        } break;
        case Race::Camite: {
            std::cout << "You're incredibly helpful." << std::endl;
        } break;
        case Race::Julian: {
            std::cout << "Anything you want!" << std::endl;
        } break;
        case Race::Aidan: {
            std::cout << "What an enigma."  << std::endl;
        } break;
        default: {
            std::cout << "Error: unknown race!" << std::endl;
        }
    }
    return 0;
}
