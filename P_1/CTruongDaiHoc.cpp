#include "CTruongDaiHoc.h"

	TruongDaiHoc::~TruongDaiHoc() {
		for (auto a : ListNhanSu)
		{
			delete a;
		}
		ListNhanSu.clear();
	}
	void TruongDaiHoc::NhapDanhSach()
	{
		NhanSu* ns;
		int choice;
		do
		{
			system("cls");
			cout << "\n===============================Menu=====================\n";
			cout << "1. Nhap thong tin giang vien.\n";
			cout << "2. Nhap thong tin tro giang. \n";
			cout << "3. Nhap thong tin nghien cuu vien. \n";
			cout << "4. Nhap thong tin chuyen vien. \n";
			cout << "5. Nhap thong tin thuc tap sinh. \n";
			cout << "0. Thoat. \n" << endl;
			cout << "=========================================================\n";
			cout << "Nhap lua chon : ";
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				ns = new GiangVien();
				ns->NhapNhanSu();
				ListNhanSu.push_back(ns);
				break;
			}
			case 2:
			{
				ns = new TroGiang();
				ns->NhapNhanSu();
				ListNhanSu.push_back(ns);
				break;
			}
			case 3:
			{
				ns = new NghienCuuVien();
				ns->NhapNhanSu();
				ListNhanSu.push_back(ns);
				break;
			}
			case 4:
			{
				ns = new ChuyenVien();
				ns->NhapNhanSu();
				ListNhanSu.push_back(ns);
				break;
			}
			case 5:
			{
				ns = new ThucTapSinh();
				ns->NhapNhanSu();
				ListNhanSu.push_back(ns);
				break;
			}
			case 0:
			{
				break;
			}
			}
		} while (choice != 0);
	}


	void TruongDaiHoc::XuatDanhSach()
	{
		for (int i = 0;i < ListNhanSu.size();i++)
		{
			ListNhanSu[i]->XuatNhanSu();
			cout << "\n==============================================\n" << endl;
		}
	}

	float TruongDaiHoc::TongLuongNV()
	{
		float Luong = 0;
		for (int i = 0;i < ListNhanSu.size();i++)
		{
			Luong += ListNhanSu[i]->LuongNV();
		}
		return Luong;
	}


	void TruongDaiHoc::MaxLuong()
	{
		int a = 0;
		int max = ListNhanSu[0]->LuongNV();
		for (int i = 1; i < ListNhanSu.size(); i++)
		{
			if (max < ListNhanSu[i]->LuongNV())
			{
				a = i;
			}
		}
		cout << "Nhan vien trong truong co muc luong cao nhat la : \n";
		ListNhanSu[a]->XuatNhanSu();
	}
