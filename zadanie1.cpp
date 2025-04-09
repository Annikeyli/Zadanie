// zadanie1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <ios>
#include <string.h>
#include "ZNAK.h"
#include "My_Array.h"
#include "sort.h"
using namespace std;
void printArr(int* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

bool compInt(int& a, int& b) {
    return a < b;
}

int main()
{    
    My_Array<Znak> arr;
    ifstream in("text.txt");
    if (!in)cout << "\nfile not open\n";
    in >> arr;
    cout << arr;
    arr.sort(Znak::compZodiak);
    cout << "\nafter sort\n" << arr;
    ofstream outbin("a.bin", ios_base::binary);
    arr.writeBin(outbin);
    ifstream inbin("a.bin", ios_base::binary);
    int month;
    cout << "\nEnter month: ";
    
    cin >> month;
    bool found = false;
    for (int i = 0; i < 8; i++) {
        if (arr[i].data[1] == month) {
            std::cout << arr[i] << "\n";
            found = true;
        }
    }
    if (!found) {
        std::cout << "No people born in this month.\n";
    }
    return 0;
}
