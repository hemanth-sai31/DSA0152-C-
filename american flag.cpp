#include <iostream>
#include <string>
using namespace std;
void printAmericanFlag() {
    const int starsRows = 9;  
    const int totalRows = 13; 
    const string starLine = "* * * * * * ==================================\n";
    const string starLineOffset = " * * * * *  ==================================\n";
    const string stripeLine = "==============================================\n"; 
    for (int i = 0; i < starsRows; ++i) {
        if (i % 2 == 0) {
            std::cout << starLine;
        } else {
            std::cout << starLineOffset;
        }
    }
    for (int i = starsRows; i < totalRows; ++i) {
	cout << stripeLine;
    }
}
int main() {
    printAmericanFlag();
    return 0;
}
