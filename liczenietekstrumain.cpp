#include <iostream>
#include <cstring>

int main() {
    char tekst[256];

    std::cout << "Podaj liczby lub ciag znakow: ";
    std::cin.getline(tekst, sizeof(tekst));


    int liczbaZnakow = std::strlen(tekst);

    std::cout << "Liczba znakow: " << liczbaZnakow << std::endl;

    return 0;
}
