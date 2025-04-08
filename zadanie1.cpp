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
 //   arr.sort(compInt);
   /* cout << "\after sort\n" << arr;
    ofstream out("int.bin", ios::binary);
    arr.writeBin(out);
    out.close();
    ifstream out("int.bin", ios::binary);
    My_Array<int>arr1;
    arr1.readBin(in);
    cout << "\n from bin file \n" << arr1;    */
}



/*ifstream in("dan.txt");
    if (!in)cout << "\nfile not open\n";
    Znak gr[8];
    ifstream in1("C:\\Users\\aakrylova3\\source\\repos\\zadanie1\\dan.txt");
    if (!in)cout << "\nfile not open\n";
    for (int i = 0; i < 8; i++)
        in1 >> gr[i];
    for (int i = 0; i < 8; i++)
        cout << gr[i] << "\n";

    My_Array<int> arr;
    cin >> arr;
    cout << arr;
    My_Array<int> help;
    help = arr;
    cout << "\n help\n" << help;*/

    //Znak  z("Ivanov", "Ivan", "deva", 2, 3, 1992);
        //Znak  z1("Ivanov", "Ivan", "deva", new int[3] {2, 3, 1992}); // same  с массивом
        //cout << z << "\n";     // с массивом + << z1 << "\n";
