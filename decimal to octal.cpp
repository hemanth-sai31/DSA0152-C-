#include <iostream>
using namespace std;
int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    int octalNumber = 0, place = 1;
    while (decimalNumber > 0) {
        octalNumber += (decimalNumber % 8) * place;
        decimalNumber /= 8;
        place *= 10;
    }
    cout << "Octal representation: " << octalNumber << endl;
}