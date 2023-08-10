#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int n1,n2;
    cin >> n1 >> n2;
    cout << '$' << fixed << setprecision(2) << n1*0.10+n2*0.25;
    return 0;
}
