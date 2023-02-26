#pragma once
#include"CTaiKhoanThuong.h"
#include"CTaiKhoanVip.h"
#include"CHeThongBaiHat.h"

class HeThongUser :public HeThongBaiHat
{
private:
    vector<BaiHat*> PlayList;
    TaiKhoan* tk;
public:
    HeThongUser();
    ~HeThongUser();
    void Open();
    void TKThuong();
    void TKVip();
    void Insert();
    void Erase();
    void XuatPlayList();
};

