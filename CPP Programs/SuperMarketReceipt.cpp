#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    string item1,item2,item3;
    float price1,price2,price3;
    cin >> item1 >> price1 >> item2 >> price2 >> item3 >> price3;
    cout << left << setw(10) << item1 << fixed << setprecision(2) << right << setw(12) << price1 << endl;
    cout << left << setw(10) << item2 << fixed << setprecision(2) << right << setw(12) << price2 << endl;
    cout << left << setw(10) << item3 << fixed << setprecision(2) << right << setw(12) << price3 << endl;
    return 0;
}
