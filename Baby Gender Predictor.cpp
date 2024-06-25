#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
string predictGender() {
    srand(time(0));
    int randomValue = rand() % 2;
    return (randomValue == 0) ? "Boy" : "Girl";
}
int main() {
    string motherName, fatherName;
    int motherAge, fatherAge;
    cout << "Enter mother's name: ";
    cin >> motherName;
    cout << "Enter mother's age: ";
    cin >> motherAge;
    cout << "Enter father's name: ";
    cin >> fatherName;
    cout << "Enter father's age: ";
    cin >> fatherAge;
    string predictedGender = predictGender();
    cout << "\nPrediction based on given inputs:" << endl;
    cout << "Mother's Name: " << motherName << endl;
    cout << "Mother's Age: " << motherAge << endl;
    cout << "Father's Name: " << fatherName << endl;
    cout << "Father's Age: " << fatherAge << endl;
    cout << "Predicted Baby Gender: " << predictedGender << endl;
    return 0;
}