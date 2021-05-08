#include <iostream>

int main() {
    int b, c;
    std::cin >> b >> c;
    std::cout << ((b + c) % 2 == 0 ? "Bino" : "Cino");
    return 0;
}