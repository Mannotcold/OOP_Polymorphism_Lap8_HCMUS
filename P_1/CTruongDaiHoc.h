#pragma once
#include"CGiangVien.h"
#include"CTroGiang.h"
#include"CNghienCuuVien.h"
#include"CChuyenVien.h"
#include"CThucTap.h"
class TruongDaiHoc
{
private:
	vector<NhanSu*>ListNhanSu;
public:

	~TruongDaiHoc();
	void NhapDanhSach();
	void XuatDanhSach();
	float TongLuongNV();
	void MaxLuong();
};

