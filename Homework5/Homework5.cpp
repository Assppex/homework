// Homework5.cpp: определяет точку входа для приложения.
//

#include "Homework5.h"

using namespace std;

#include <iostream>
#include <math.h>

using namespace std;
//Ошибка:
/*
pair<int*, int> print_array(int p[]) {
    int x;
    int len = 1;
    while (cin >> x) {
        p[len - 1] = x;
        len++;
        int* p_arr2 = new int[len];
        for (int i = 0; i < len; i++) p_arr2[i] = p[i];
        p = p_arr2;
        delete[] p_arr2;
    }
    return { p, len };
}
*/
/*Очищать p_arr2 не имеет смысла, лучше вычищать p, который указывает на ту же ячейку памяти, что и p_arr2,
тем самым отчищать все сразу, создадим указатель на указатель созданный в мейне, при вызове функции
создастся копия адреса исходного указателя, путем разыменовывания этой копии получим исходный указатель,
однако теперь мы работаем напрямую с памятью, находящейся там, тем самым отчищать изначально заданный в мэйне указатель не надо
тк он отчиститься тут и при расширении массива выделиться новая паямть*/

pair<int**, int> print_array(int** p) {
    int x;
    int len = 1;
    int* p2 = 0;
    cin >> *p[0];
    while (cin >> x) {
        len++;
        p2= new int[len];
        //тк int занимает 4 байта, то копируем длину старого умноженного на 4
        memcpy(p2, *p, 4*(len-1));
        p2[len-1] = x;
        delete[]  *p;
        *p = new int [len];
        memcpy(*p, p2, 4*len);
        delete[] p2;
    }
    return { p, len };
}

pair<int**, int> five(int array[], int N) {
    int k = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] > 5) {
            k++;
            
        }
    }
    
    int j = 0;
    cout << endl;
    int* T = new int[k];
    for (int i = 0; i < N; i++) {
        if (array[i] > 5) {
            T[j] = array[i];
            cout << T[j] << endl;
            j++;
        }
       
    }
    return { &T, k };

}




using namespace std;
int main() {
    /*
    int *a = new int(5);
    int *b = new int;
    int *c = new int;
    *a = 3;
    *b = 4;
    *c = 12;
    float d = sqrt(*a * *a + (*b) * (*b));
    delete a;
    delete b;
    auto res = sqrt(d*d + *c * *c);
    delete c;
    std::cout << res << std::endl;*/
    //    const int n = 10;
    //    int array[n];
    //    int num;
    //    std::cin >> num;
    //    int *p_arr = new int[num];
    //    for (int i = 0; i < num; i++){
    //        p_arr[i] = i*i;
    //    }
    //    delete [] p_arr;

    int* p_arr1 = 0;
    p_arr1=new int[1];
    auto T = print_array(&p_arr1);
    int* a = *T.first;
    for (int i = 0; i < T.second; i++)
    {
        cout << **T.first << " ";
        (*T.first)++;
    }
    *T.first = a;
    auto f = five(*T.first, T.second);
    delete[] *f.first;
    delete[] * T.first;

    return 0;
}


















