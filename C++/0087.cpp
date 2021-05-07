#include <iostream>

int main() {
    int p, r;
    char res;
    std::cin >> p >> r;

    if (p == 0) {
        res = 'C';
    } else if (r == 0) {
        res = 'B';
    } else {
        res = 'A';
    }

    std::cout << res;

    return 0;
}