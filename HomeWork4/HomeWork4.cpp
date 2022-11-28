// HomeWork4.cpp: определяет точку входа для приложения.
//

#include "HomeWork4.h"
using namespace std;

int main()
{
	int n;
	uint8_t dec_tmp=0;
	vector<string> a;
	vector<uint8_t> decode;
	string tmp;
	cout << "Define the quantity of strings" << endl;
	cin >> n;
	cout << "Define the strings" << endl;
	for (int i = 0; i < n;i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	//Предстваляем строку как сумму байтовых кодов
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a[i].length(); j++) {
			dec_tmp += (uint8_t)a[i][j];
		}
		decode.push_back(dec_tmp);
		dec_tmp = 0;
	}
	cout << endl;
	//Представление строк в закодированном виде
	for (int i = 0; i < n; i++) {
		printf("%d\n",decode[i]);
	}
	//Сортириовка одновременная двух массивов
	int tmpint = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (decode[j] > decode[j + 1]) {
				tmpint = decode[j]; // создали дополнительную переменную
				decode[j] = decode[j + 1]; // меняем местами
				decode[j + 1] = tmpint; // значения элементов
				tmp = a[j]; // создали дополнительную переменную
				a[j] = a[j + 1]; // меняем местами
				a[j + 1] = tmp; // значения элементов
			}
		}
	}
	cout << "Sorted stgrings:" << endl;
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<endl;
	}

	return 0;
}
