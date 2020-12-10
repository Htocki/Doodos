// В одномерном массиве, состоящем из N вещественных элементов, вычислить:
// - минимальный элемент массива;
// - сумму элементов массива, расположенных после максимального элемента.
// Преобразовать массив таким образом, чтобы сначала располагались все элементы, равные нулю, а потом - все остальные.

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

double get_random_real() {
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_real_distribution<> distribution(0.0, 1.0);
    return distribution(generator);
}

int main() {
    std::cout << "Input n: ";
    unsigned int n; std::cin >> n;
    std::vector<double> array(n);
    for (auto& element : array) { element = get_random_real(); }
    for (const auto element : array) { std::cout << element << "\n"; }
    std::cout << "Minimum element: " << *std::min_element(std::begin(array), std::end(array)) << std::endl;
    std::cout << "Sum after maximum element: " 
        << std::accumulate(++std::max_element(std::begin(array), std::end(array)), std::end(array), 0.0)
        << std::endl;
    std::stable_partition(std::begin(array), std::end(array), [](double value){ return value == 0.0; } );
    for (const auto element : array) { std::cout << element << "\n"; }
    return 0;
}
