#include <iostream>

void divide(int a, int b) {
    if (b == 0) {
        throw "Error: División por cero";
    }
    std::cout << "Resultado: " << a / b << std::endl;
}

int main() {
    int x = 10;
    int y = 0;

    try {
        divide(x, y);
    }
    catch (const char* e) {
        std::cout << "Excepción capturada: " << e << std::endl;
    }

    return 0;
}