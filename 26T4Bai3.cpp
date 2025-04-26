#include <bits/stdc++.h>

using namespace std;
struct SinhVien {
    string ten;
    float toan;
    float ly;
    float hoa;
    float dtb; // diem trung binh
};

// Hàm tính diem trung binh
float tinhDTB(float toan, float ly, float hoa) {
    return (toan + ly + hoa) / 3.0;
}

int main() {
    int n;

    // NHap so luong sinh vien
    while (true) {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Gia tri khong hop le. Vui long nhap lai!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    SinhVien sv[n];

    //Nhap thong tin tung sinh vien
    for (int i = 0; i < n; ++i) {
        cin.ignore(); // Xóa ký t? th?a
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ten: ";
        getline(cin, sv[i].ten);

//    	Nhap diem co kiem tra hop le
        while (true) {
            cout << "Diem Toan: ";
            cin >> sv[i].toan;
            if (cin.fail() || sv[i].toan < 0 || sv[i].toan > 10) {
                cout << "Nhap sai. Diem tu 0 den 10. Nhap lai!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else break;
        }

        while (true) {
            cout << "Diem Ly: ";
            cin >> sv[i].ly;
            if (cin.fail() || sv[i].ly < 0 || sv[i].ly > 10) {
                cout << "Nhap sai. Diem tu 0 den 10. Nhap lai!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else break;
        }

        while (true) {
            cout << "Diem Hoa: ";
            cin >> sv[i].hoa;
            if (cin.fail() || sv[i].hoa < 0 || sv[i].hoa > 10) {
                cout << "Nhap sai. Diem tu 0 den 10. Nhap lai!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else break;
        }

        // Tinh diem trung binh
        sv[i].dtb = tinhDTB(sv[i].toan, sv[i].ly, sv[i].hoa);
    }

    // In danh sách sinh viên có ÐTB >= 8
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    bool coSinhVien = false;
    for (int i = 0; i < n; ++i) {
        if (sv[i].dtb >= 8.0) {
            coSinhVien = true;
            cout << fixed << setprecision(2);
            cout << "Ten: " << sv[i].ten
                 << ", Toan: " << sv[i].toan
                 << ", Ly: " << sv[i].ly
                 << ", Hoa: " << sv[i].hoa
                 << ", DTB: " << sv[i].dtb << endl;
        }
    }

    if (!coSinhVien) {
        cout << "Khong co sinh vien nao co DTB >= 8\n";
    }

    return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
