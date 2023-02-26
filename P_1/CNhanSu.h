#pragma once
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class NhanSu
{
private:
	string HoTen;
	string NamSinh;
	string MaSo;
public:

	NhanSu(string NewHoTen, string NewNamSinh, string NewMaSo);
	NhanSu(const NhanSu& gv);
	NhanSu();
	~NhanSu();
	virtual void NhapNhanSu();
	virtual void XuatNhanSu();
	virtual float LuongNV() = 0;
};