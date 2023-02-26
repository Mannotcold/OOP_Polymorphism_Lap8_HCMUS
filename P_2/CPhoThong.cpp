#include "CPhoThong.h"
PhoThong::PhoThong()
{
    LuocXem = 0;
};
PhoThong::~PhoThong() {};
void PhoThong::NhapBaiHat()
{
    BaiHat::NhapBaiHat();
    cout << "Nhap luoc xem bai hat: ";
    cin >> LuocXem;
}
void PhoThong::XuatBaiHat()
{
    BaiHat::XuatBaiHat();
    cout << "\nLuoc xem bai hat: ";
    cout << LuocXem;
}
int PhoThong::XepHang()
{
    return LuocXem;
}