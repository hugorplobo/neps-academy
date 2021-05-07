#include <iostream>

long long mdc(long long a, long long b);

int main() {
    long long n, m, x;
    std::cin >> n >> m;

    for (long long i = m; i >= 1; --i) {
        if (mdc(i, n) == 1) {
            x = i;
            break;
        }
    }

    std::cout << x;

    return 0;
}

long long mdc(long long a, long long b) {
    if (a < b) std::swap(a, b);
    if (b == 0) return a;
    return mdc(b, a % b);
}