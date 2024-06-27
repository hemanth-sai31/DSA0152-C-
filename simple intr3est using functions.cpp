#include <iostream>
#include <iomanip>
using namespace std;
float calculateSimpleInterest(float principal, float rate, int time) {
    return (principal * rate * time) / 100.0;
}
float getInterestRate(bool isSeniorCitizen) {
    return isSeniorCitizen ? 12.0 : 10.0;
}
int main() {
    float principal;
    int time;
    bool isSeniorCitizen;
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Time (in years): ";
    cin >> time;
    cout << "Are you a senior citizen? (1 for Yes, 0 for No): ";
    cin >> isSeniorCitizen;
    float rate = getInterestRate(isSeniorCitizen);
    float interest = calculateSimpleInterest(principal, rate, time);
    cout << "\nPrincipal Amount: $" << principal << endl;
    cout << "Rate of Interest: " << rate << "%" << endl;
    cout << "Time (in years): " << time << endl;
    cout << "Simple Interest: $" << interest << endl;
    return 0;
}