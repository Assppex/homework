// HomeWork3.cpp: определяет точку входа для приложения.
//
#include "HomeWork3.h"
using namespace std;
int main()
{
	int n;
	cout << "Define quantity of elements in the array" << endl;
	cin >> n;
	vector<vector<int>> unique;
	unique.push_back(vector<int>(n, 0));
	unique.push_back(vector<int>(n, 0));
	int* arr = new int[n];
	//Ввод массива
	for (int i = 0; i < n;i++){
		cin >> arr[i];
	}
	int tmp;
	//Сортировка массива
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j]; // создали дополнительную переменную
				arr[j] = arr[j + 1]; // меняем местами
				arr[j + 1] = tmp; // значения элементов
			}
		}
	}
	//Подсчет уникальных элементов
	tmp = 1;
	int kol = 0;
	for (int i = 0; i < n-1;i++) {
		if (arr[i] == arr[i + 1]) {
			tmp++;
		}
		else {
			unique[0][kol]=arr[i];
			unique[1][kol]=tmp;
			kol ++;
			tmp = 1;
		}
	}
	cout << kol << endl;
	unique[0][kol] = arr[n-1];
	unique[1][kol] = tmp;
	cout << "Unique numbers"<<endl;
	for (int i = 0; i <= kol; i++) {
		cout << unique[0][i] << endl;
	}
	cout << "Quantity of unique numbers" << endl;;
	for (int i = 0; i <= kol; i++) {
		cout << unique[1][i] << endl;
	}
	
	delete[] arr;
	return 0;
}
