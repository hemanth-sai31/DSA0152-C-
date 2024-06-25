#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    set<int> uniqueElements;
    set<int> duplicates;
    for (int i = 0; i < n; ++i) {
        if (uniqueElements.count(arr[i]) > 0) {
            duplicates.insert(arr[i]);
        } else {
            uniqueElements.insert(arr[i]);
        }
    }
    cout << "Repeated elements in the array: ";
    for (int duplicate : duplicates) {
        cout << duplicate << " ";
    }
    cout << endl;
    return 0;
}
