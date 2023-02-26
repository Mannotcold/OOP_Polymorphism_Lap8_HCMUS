#pragma once
#include"CNhanSu.h"
class GiangVien :public NhanSu
{
private:
	string HocHam;
	string HocVi;
	int ThamNien;
	int Mon;
	vector<string>List;

public:

	GiangVien();

	GiangVien(string NewHoTen, string NewNamSinh, string NewMaSo, string NewHocHam, string NewHocVi, int NewThamNien, int NewMon, string TenMon);
	GiangVien(const GiangVien& gv);
	~GiangVien();
	float LuongNV();
	void NhapNhanSu();
	void XuatNhanSu();
};