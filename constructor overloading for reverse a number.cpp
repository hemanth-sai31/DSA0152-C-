#include <iostream>
#include <string>
using namespace std;
class Reverse {
private:
    string reversedString;
    int reversedNumber;
public:
    Reverse(const string& str) {
        reversedString = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            reversedString += str[i];
        }
        reversedNumber = 0;
    }
    Reverse(int num) {
        reversedNumber = 0;
        while (num != 0) {
            int digit = num % 10;
            reversedNumber = reversedNumber * 10 + digit;
            num /= 10;
        }
        reversedString = "";
    }
    void display() const {
        if (!reversedString.empty()) {
            cout << "Reversed String: " << reversedString << std::endl;
        } else {
            cout << "Reversed Number: " << reversedNumber << std::endl;
        }
    }
};
int main() {
    string str = "IDIOT";
    Reverse reverseStr(str);
    reverseStr.display();
    int num = 12345;
    Reverse reverseNum(num);
    reverseNum.display();
    return 0;
}