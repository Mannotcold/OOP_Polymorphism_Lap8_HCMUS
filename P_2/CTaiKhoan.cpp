#include "CTaiKhoan.h"
TaiKhoan::TaiKhoan() {
TK = "";
MK = "";
TienCuaBan = 0;
    }
TaiKhoan::~TaiKhoan() {}
    float TaiKhoan::GetTienCuaBan()
    {
        return TienCuaBan;
    }
    bool TaiKhoan::CheckKhoanTrong(string MK)
    {
        for (int i = 0;i < MK.size();i++)
            if (MK[i] == ' ')
                return false;
        return true;
    }
    void TaiKhoan::NhapTK()
    {
        cin.ignore();
        cout << "Nhap tai khoang cua ban: ";
        getline(cin, TK);
        do {
            cout << "Nhap mat khau cua ban: ";
            getline(cin, MK);
            if (CheckKhoanTrong(MK) == false || MK.size() < 8)
                cout << "Ban nhap sai mat khau! Vui long nhap lai. ";
            else
                break;
        } while (true);
        cout << "\nNhap so tien ban nap vao tai khoang ";
        cin >> TienCuaBan;
    }

     void TaiKhoan::XuatTK()
    {
        cout << "\nTai khoang cua ban: ";
        cout << TK;
        cout << "\nMat khau cua ban: ";
        cout << MK;
    }