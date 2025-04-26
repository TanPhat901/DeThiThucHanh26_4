#include <bits/stdc++.h>
using namespace std;

bool laSoNguyenTo(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (n <= 2) {
        cout << "khong co so nguyen to" << endl;
    } else {
        cout << "Cac so nguyen to nho hon " << n << " la: ";
        for (int i = 2; i < n; i++) {
            if (laSoNguyenTo(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

