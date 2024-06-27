#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;
void checkValue(double x) {
    if (x == 0) {
        throw invalid_argument("Value cannot be zero.");
    }
    if (abs(x) < 0.001) {
        throw std::range_error("Value is too small.");
    }
}
int main() {
    double x = 0.00001;   
    try {
        checkValue(x);
    } catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
    } catch (const std::range_error& e) {
        cerr << "Range error: " << e.what() << endl;
    } catch (...) {
        cerr << "An unknown error occurred." << endl;
    }
    return 0;
}