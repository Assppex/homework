// HomeWork2.cpp: определяет точку входа для приложения.
//

#include "HomeWork2.h"

using namespace std;

void initializaton(vector<vector <int>>& a, int n) {
    for (int i = 0; i < n; i++) {
        a.push_back(vector<int>(n, 0));
    }
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 2;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
}
double determinant(vector<vector<double>>& a, int n) {
    double tmp;
    for (int i = 0; i <= n - 1; i++) {
        if (a[i][i] == 0) {
            return 0;
        }
        else {
            for (int j = i + 1; j < n; j++) {
                tmp = a[j][i] / a[i][i];
                for (int k = 0; k < n; k++) {
                    a[j][k] = a[j][k] - tmp * a[i][k];
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    double det = 1;
    for (int i = 0; i < n; i++) {
        det *= a[i][i];
    }
    return det;
}
int main(void)
{
    cout << "matrix nxn size";
    int n;
    cin >> n;
    vector  <vector <double>> a;
    for (int i = 0; i < n; i++) {
        a.push_back(vector<double>(n, 0));
    }
    //srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    double tmp = determinant(a, n);
    cout << "Determinant:" << tmp << endl;
    return 0;
}
