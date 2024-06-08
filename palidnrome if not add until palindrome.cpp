#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}
int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while (!isPalindrome(num)) {
        int randomNum = generateRandomNumber(1, 100);
        cout << num << " is not a palindrome. Adding " << randomNum << "." << endl;
        num += randomNum;
    }
    cout << num << " is a palindrome." << endl;
}