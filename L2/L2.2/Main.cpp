// Даны два массива A и B. Определить величину разности между соответствующими элементами двух массивов и записать на то
// же место в третий массив той же размерности.

#include <iomanip>
#include <iostream>
#include <vector>

int main() {
    std::vector A { 1, 2, 3, 4, 5 };
    std::vector B { 5, 4, 3, 2, 1 };
    std::vector<int> C(A.size());
    for (std::size_t i { 0 }; i < A.size(); ++i) {
        C[i] = A[i] - B[i];
    }
    std::cout << "A:  ";
    for (const auto element : A) { std::cout << std::setw(2) << element << " "; }
    std::cout << std::endl;
    std::cout << "B:  ";
    for (const auto element : B) { std::cout << std::setw(2) << element << " "; }
    std::cout << std::endl;
    std::cout << "C:  ";;
    for (const auto element : C) { std::cout << std::setw(2) << element << " "; }
    std::cout << std::endl;
    return 0;
}
