#pragma once
#include"CNhanSu.h"
class TroGiang :public NhanSu
{
private:
	int MonTroGiang;
public:

	TroGiang();
	TroGiang(string NewHoTen, string NewNamSinh, string NewMaSo, int NewMonTroGiang);
	TroGiang(const TroGiang& gv);
	~TroGiang();
	float LuongNV();
	void NhapNhanSu();
	void XuatNhanSu();

};
