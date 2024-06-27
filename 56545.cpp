#include <iostream>
template <typename T>
T min3(T a, T b, T c) {
    T minVal = (a < b) ? a : b;
    minVal = (minVal < c) ? minVal : c;
    return minVal;
}
int main() {
    int int1 = 1, int2 = 0, int3 = 2;
    std::cout << "min3(" << int1 << ", " << int2 << ", " << int3 << ") = " << min3(int1, int2, int3) << std::endl;
    double double1 = 1.5, double2 = 0.5, double3 = 3.0;
    std::cout << "min3(" << double1 << ", " << double2 << ", " << double3 << ") = " << min3(double1, double2, double3) << std::endl;
    return 0;
}