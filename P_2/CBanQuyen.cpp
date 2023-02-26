#include "CBanQuyen.h"

BanQuyen::BanQuyen() {
    Gia = 0;
    LuocXem = 0;
};
BanQuyen::~BanQuyen() {};
void BanQuyen::NhapBaiHat()
{
    BaiHat::NhapBaiHat();
    cout << "Nhap phi ban quyen : ";
    cin >> Gia;
    cout << "Nhap luoc xem bai hat: ";
    cin >> LuocXem;
}
void BanQuyen::XuatBaiHat()
{
    BaiHat::XuatBaiHat();
    cout << "\nPhi ban quyen : ";
    cout << Gia;
    cout << "\nLuoc xem bai hat: ";
    cout << LuocXem;
}
int BanQuyen::XepHang()
{
    return LuocXem;
}