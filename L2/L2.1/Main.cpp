// Заполнить массив случайными вещественными числами из промежутка [-12; 2].

#include <array>
#include <iostream>
#include <random>

double get_random_real() {
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_real_distribution<> distribution(-12.0, 2.0);
    return distribution(generator);
}

int main() {
    std::array<double, 10> array;
    for (auto& element : array) { element = get_random_real(); }
    for (const auto element : array) { std::cout << element << std::endl; }
    return 0;
}
