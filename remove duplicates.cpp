#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr = {4, 2, 4, 5, 6, 7, 2, 1, 6};
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for (int num : arr) {
        cout << num << " ";
    }
    cout << std::endl;
    return 0;
}