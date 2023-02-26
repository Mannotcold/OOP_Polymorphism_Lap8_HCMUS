#pragma once
#include <iostream>
#include<string>
#include<vector>

using namespace std;
class BaiHat
{
private:
    string Ten;
    string Loi;
    string CaSi;
    string NamPH;
    string TheLoai;
public:
    BaiHat();
    BaiHat(const BaiHat& bh);
    ~BaiHat();
    virtual void NhapBaiHat();
    virtual void XuatBaiHat();
    virtual int XepHang() = 0;
};
