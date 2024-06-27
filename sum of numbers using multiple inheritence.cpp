#include <iostream>
using namespace std;
class ClassA {
public:
    ClassA(int a) : a(a) {}
    int getA() const { return a; }
private:
    int a;
};
class ClassB {
public:
    ClassB(int b) : b(b) {}
    int getB() const { return b; }

private:
    int b;
};
class ClassC : public ClassA, public ClassB {
public:
    ClassC(int a, int b) : ClassA(a), ClassB(b) {}
    int sum() const { return getA() + getB(); }
};
int main() {
    ClassC obj(5, 10);
    std::cout << "The sum is: " << obj.sum() << std::endl;
}