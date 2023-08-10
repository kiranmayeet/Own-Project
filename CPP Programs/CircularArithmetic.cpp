#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,p,k;
    cin >> n >> p >> k;
    int f = (p+(k%n) + n) % n;
    cout << f;
    return 0;
}
