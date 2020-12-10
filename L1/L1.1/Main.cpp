// Найти все двузначные числа, сумма квадратов цифр которых делится на 17.

#include <iostream>
#include <cmath>

int main() {
    for (unsigned int value { 10 }; value < 100; ++value) {
        unsigned int units { value % 10 }; 
        unsigned int tens { value / 10 };
        unsigned int sum { static_cast<unsigned int>(std::pow(units, 2) + std::pow(tens, 2)) };
        if (sum % 17 == 0) {
            std::cout << value << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
