#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 36; ++j) {
            if (i < 2 || i > 3) {
                cout << " ";
            } else {
                cout << "=";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 36; ++j) {
            cout << "=";
        }
        cout << endl;
    }
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 36; ++j) {
            if (i < 2 || i > 3) {
                cout << " ";
            } else {
                cout << "=";
            }
        }
        cout << endl;
    }
    return 0;
}