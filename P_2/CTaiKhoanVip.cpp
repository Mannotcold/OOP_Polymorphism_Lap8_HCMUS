#include "CTaiKhoanVip.h"
TaiKhoanVip::TaiKhoanVip()
{
    MucPhi = 100000;
}
TaiKhoanVip::~TaiKhoanVip() {}
void TaiKhoanVip::NhapTK()
{
    TaiKhoan::NhapTK();
}
void TaiKhoanVip::XuatTK()
{
    TaiKhoan::XuatTK();
    cout << "\nMuc phi phai tra hang thang: ";
    cout << MucPhi;
}
