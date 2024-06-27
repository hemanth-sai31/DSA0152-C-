#include <iostream>
using namespace std;
double computeNetSalary(double basicSalary) {
    double da = 0.52 * basicSalary;
    double grossSalary = basicSalary + da;
    double incomeTax = 0.3 * grossSalary;
    return grossSalary - incomeTax;
}
int main() {
    int N;
    cout << "Enter the number of employees: ";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        double basicSalary;
        cout << "Enter basic salary for employee " << i << ": $";
        cin >> basicSalary;
        cout << "Net salary for employee " << i << ": $" << computeNetSalary(basicSalary) << endl;
    }
    return 0;
}