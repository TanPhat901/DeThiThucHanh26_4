#include <bits/stdc++.h>
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;

    //nhap so phan tu n kiem tra hop le
    while (true) {
        cout << "Nhap so luong phan tu n: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cout << "Loi: Vui long nhap so nguyen duong!" << endl;
            cin.clear(); // xóa loi
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        } else {
            break;
        }
    }

    int a[n];

    //nhap mang so nguye
    cout << "Nhap " << n << " so nguyen:\n";
    for (int i = 0; i < n; ++i) {
        while (true) {
            cout << "a[" << i << "] = ";
            cin >> a[i];
            if (cin.fail()) {
                cout << "Khong hop le! Vui long nhap so nguyen." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }

    // Tìm so lon nhat chia het cho 3
    bool timThay = false;
    int maxChiaHet3;

    for (int i = 0; i < n; ++i) {
        if (a[i] % 3 == 0) {
            if (!timThay || a[i] > maxChiaHet3) {
                maxChiaHet3 = a[i];
                timThay = true;
            }
        }
    }

    // In ket qua
    if (timThay) {
        cout << "So lon nhat chia het cho 3 la: " << maxChiaHet3 << endl;
    } else {
        cout << "khong co" << endl;
    }

    return 0;
}

