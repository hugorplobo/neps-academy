#include <iostream>

int main() {
    double a, b;
    std::cin >> a >> b;
    int average = (a + b) / 2;
    std::cout << (average >= 7 ? "Aprovado" : average >= 4 ? "Recuperacao" : "Reprovado");

    return 0;
}