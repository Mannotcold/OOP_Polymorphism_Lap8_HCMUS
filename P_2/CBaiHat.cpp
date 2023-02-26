#include "CBaiHat.h"
BaiHat::BaiHat()
{
    Ten = "";
    Loi = "";
    CaSi = "";
    NamPH = "";
    TheLoai = "";
}

BaiHat::BaiHat(const BaiHat& bh)
{
    Ten = bh.Ten;
    Loi = bh.Loi;
    CaSi = bh.CaSi;
    NamPH = bh.NamPH;
    TheLoai = bh.TheLoai;
}
BaiHat::~BaiHat() {};
 void BaiHat::NhapBaiHat()
{
    cin.ignore();
    cout << "Nhap ten bai hat : ";
    getline(cin, Ten);
    cout << "Nhap loi bai hat : ";
    getline(cin, Loi);
    cout << "Nhap ca si bieu dien : ";
    getline(cin, CaSi);
    cout << "Nhap nam phat hanh : ";
    getline(cin, NamPH);
    cout << "Nhap the loai bai hat : ";
    getline(cin, TheLoai);
}
 void BaiHat::XuatBaiHat()
{
    cout << "\nTen bai hat : ";
    cout << Ten;
    cout << "\nLoi bai hat : ";
    cout << Loi;
    cout << "\nNhap ca si bieu dien : ";
    cout << CaSi;
    cout << "\nNhap nam phat hanh : ";
    cout << NamPH;
    cout << "\nNhap the loai bai hat : ";
    cout << TheLoai;

}
