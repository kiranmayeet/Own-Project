#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int amt;
    cin >> amt;
    float res = amt+(amt*23/100.0);
    cout << fixed << setprecision(2) << res;
    return 0;
}
