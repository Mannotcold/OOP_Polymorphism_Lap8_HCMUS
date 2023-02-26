#pragma once
#include"CBaiHat.h"
class BanQuyen : public BaiHat
{
private:
    long long LuocXem;
    float Gia;
public:
    BanQuyen();
    ~BanQuyen();
    void NhapBaiHat();
    void XuatBaiHat();
    int XepHang();

};

