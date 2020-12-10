// Запросите у пользователя два положительных числа А и В и найдите произведение всех натуральных чисел из промежутка [А, В].

#include <iostream>

int main() {
    unsigned int a, b;
    std::cout << "Input unsigned number A: "; std::cin >> a;
    std::cout << "Input unsigned number B: "; std::cin >> b;
    if (a <= b) {
        unsigned int result { 1 };
        while (a <= b) {
            result *= a;
            ++a;
        }
        std::cout << "Result: " << result << std::endl;
    }
    return 0;
}