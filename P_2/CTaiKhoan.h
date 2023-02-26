#pragma once

#include"CBaiHat.h"

class TaiKhoan
{
private:
    string TK;
    string MK;
    float TienCuaBan;
public:
    TaiKhoan();
    ~TaiKhoan();
    float GetTienCuaBan();
    bool CheckKhoanTrong(string MK);
    virtual void NhapTK();
    virtual void XuatTK();
};
