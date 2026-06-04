#include <iostream>

int main() {
    std::cout << "Hello, GitHub!" << std::endl;

    int ldrValue = 450;

    if (ldrValue < 500) {
        std::cout << "Dark Room - LED ON" << std::endl;
    } else {
        std::cout << "Bright Room - LED DIM" << std::endl;
    }

    return 0;
}
