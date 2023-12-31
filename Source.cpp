#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] != 1 && a[i + 1] - a[i] != 0) count += a[i + 1] - a[i] - 1;
    }
    cout << count;
    return 0;
}