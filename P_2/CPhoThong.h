#pragma once
#include"CBaiHat.h"

class PhoThong : public BaiHat
{
private:
    long long LuocXem;
public:
    PhoThong();
    ~PhoThong();
    void NhapBaiHat();
    void XuatBaiHat();
    int XepHang();
};

