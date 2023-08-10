#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int r,c;
    float area,c_area;
    cin >> r >> c;
    area = M_PI * pow(r, 2);
    c_area = M_PI * pow((r-c),2);
    cout << fixed << setprecision(9) << (c_area/area)*100;
}
