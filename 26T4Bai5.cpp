#include <bits/stdc++.h>
using namespace std;

//ham de quy tinh so F
int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Nhâp so n
    while (true) {
        cout << "Nhap so n (1 <= n <= 30): ";
        cin >> n;
        if (cin.fail() || n <= 0 || n > 30) {
            cout << "Gia tri khong hop le. Vui long nhap lai!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else break;
    }

    // In dãy Fibonacci tu F1 den Fn
    cout << "Day Fibonacci tu F1 den F" << n << ":\n";
    for (int i = 1; i <= n; ++i) {
        cout << "F" << i << " = " << fibonacci(i) << endl;
    }

    return 0;
}

