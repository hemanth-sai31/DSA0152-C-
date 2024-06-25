#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;
public:
    Employee(string empName, int empID, double empSalary)
        : name(empName), employeeID(empID), salary(empSalary) {}
    void setSalary(char grade) {
        salary += salary * (grade == 'A' ? 0.10 : grade == 'B' ? 0.05 : grade == 'D' ? -0.05 : grade == 'F' ? -0.10 : 0);
    }
    void display() const {
        cout << "Name: " << name << ", ID: " << employeeID << ", Salary: $" << salary << endl;
	}
};
int main() {
    Employee emp("John Doe", 12345, 50000);
    emp.display();
    char grade;
    cout << "Enter performance grade (A, B, C, D, F): ";
    cin >> grade;
    emp.setSalary(grade);
    emp.display();
    return 0;
}