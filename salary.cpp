#include <iostream>
using namespace std;
int main() {
    char grade;
    double salary, bonus, totalSalary;
    cout << "Enter the grade of the employee (A or B): ";
    cin >> grade;
    cout << "Enter the employee salary: ";
    cin >> salary;
    if (grade == 'A') {
        bonus = 0.05 * salary;
    } else if (grade == 'B') {
        bonus = 0.10 * salary;
    } else {
        cout << "Invalid grade entered. Please enter A or B." << endl;
        return 1;  
    }
    if (salary < 10000) {
        bonus += 0.02 * salary;
    }
    totalSalary = salary + bonus;
    cout << "Salary=" << salary << endl;
    cout << "Bonus=" << bonus << endl;
    cout << "Total to be paid: " << totalSalary << endl;
    return 0;
}
