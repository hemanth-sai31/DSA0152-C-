#include <iostream>
using namespace std;
class MA {
public:
    int m, n, i, j, a[100][100], b[100][100], sum[100][100];
    void sumofmatrix(int r, int c) {
        cout <<"Matrix 1 = " << endl;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        cout <<"Matrix 2 = " << endl;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cin >> b[i][j];
            }
        }
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }
        cout << "Sum = " << endl;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    int u = 2, v = 2;
    MA e;
    e.sumofmatrix(u,v);
    return 0;
}
