#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    // Nhap so phan tu
    while (true) {
        cout << "Nhap so luong phan tu n: ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Gia tri khong hop le. Vui long nhap lai!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else break;
    }

    int a[n];
    set<int> tapPhanBiet;

    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; ++i) {
        while (true) {
            cout << "a[" << i << "] = ";
            cin >> a[i];
            if (cin.fail()) {
                cout << "Khong hop le! Nhap lai.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                tapPhanBiet.insert(a[i]);
                break;
            }
        }
    }

    cout << "So luong gia tri phan biet trong mang la: " << tapPhanBiet.size() << endl;

    return 0;
}

