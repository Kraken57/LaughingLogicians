#include <iostream>
#include <string>

int main() {
    std::string F1, S1;
    std::getline(std::cin, F1, ' ');  
    std::getline(std::cin, S1);      

    std::string F2, S2;
    std::getline(std::cin, F2, ' ');  
    std::getline(std::cin, S2);      

    if (S1 == S2) {
        std::cout << "ARE Brothers\n";
    } else {
        std::cout << "NOT\n";
    }

    return 0;
}
