#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float mile;
    cin >> mile;
    cout << round(mile*1000*5280/4854);
}
