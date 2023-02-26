#pragma once
#include"CBanQuyen.h"
#include"CPhoThong.h"
class HeThongBaiHat
{
public:
    vector<BaiHat*>List;
    HeThongBaiHat();
    ~HeThongBaiHat();
    void NhapDanhSach();

    void XuatXepHang();
    void XuatDanhSach();
};

