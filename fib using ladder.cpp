#include <iostream>
using namespace std;
int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    int a = 0, b = 1, c;
    for (int i = 2; i < n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  }
}
int main() {
  int n;
  cout << "Enter the Nth term: ";
  cin >> n;
  cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
  return 0;
}