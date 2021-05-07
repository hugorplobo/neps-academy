#include <algorithm>
#include <iostream>

int main() {
    int times[3], ord[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> times[i];
    }

    std::copy(std::begin(times), std::end(times), std::begin(ord));

    std::sort(std::begin(ord), std::end(ord));

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (times[j] == ord[i]) {
                std::cout << j + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}