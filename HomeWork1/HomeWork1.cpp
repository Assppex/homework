// HomeWork1.cpp: определяет точку входа для приложения.
//

#include "HomeWork1.h"
using namespace std;

void plot(vector<vector<int>>* a,int n) {
    vector<vector<int>> b = *a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    vector<vector<int>> a;
    cout << "Matrix size n x n";
    int n;
    cin >> n;
    int kol = 0;
    for (int i = 0; i < n; i++) {
        a.push_back(vector<int>(n, 0));
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                kol++;
                a[i][j] = kol;
            }
        }
        else {
            for (int j = n-1; j >= 0; j--) {
                kol++;
                a[i][j] = kol;
            }
        }
    }
    vector<vector<int>>* ptr;
    ptr = &a;
    plot(ptr,n);
}
