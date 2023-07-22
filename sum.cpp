#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Calling sum(1, 2)...\n";
    int c = sum(1, 2);
    std::cout << "Result: " << c << "\n";
}
