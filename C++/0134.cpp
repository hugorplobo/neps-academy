#include <iostream>

int main() {
    int input[2], sum = 0;
    for (int i = 0; i < 2; ++i) {
        std::cin >> input[i];
    }

    for (int num : input) {
        sum += num;
    }

    std::cout << sum;

    return 0;
}