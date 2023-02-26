#pragma once
#include"CTaiKhoan.h"
class TaiKhoanVip :public TaiKhoan
{
private:
    float MucPhi = 100000;
public:
    TaiKhoanVip();
    ~TaiKhoanVip();
    void NhapTK();
    void XuatTK();
};

