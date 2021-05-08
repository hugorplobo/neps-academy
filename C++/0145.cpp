#include <iostream>

int main() {
    int x;
    std::cin >> x;
    std::cout << (x < 0 ? "negativo" : x > 0 ? "positivo" : "nulo");
}