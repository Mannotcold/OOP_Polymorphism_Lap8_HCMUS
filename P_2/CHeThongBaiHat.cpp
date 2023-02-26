#include "CHeThongBaiHat.h"

HeThongBaiHat::HeThongBaiHat() {};
HeThongBaiHat::~HeThongBaiHat() {
    List.clear();
}
void HeThongBaiHat::NhapDanhSach()
{
    BaiHat* bh;
    int choice;
    do
    {
        system("cls");
        cout << "\n===============================Menu=====================\n";
        cout << "1. Nhap thong tin bai hat pho thong.\n";
        cout << "2. Nhap thong tin bai hat ban uyen. \n";
        cout << "0. Thoat. \n" << endl;
        cout << "=========================================================\n";
        cout << "Nhap lua chon : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            bh = new PhoThong();
            bh->NhapBaiHat();
            List.push_back(bh);
            break;
        }
        case 2:
        {
            bh = new BanQuyen();
            bh->NhapBaiHat();
            List.push_back(bh);
            break;
        }

        case 0:
        {
            break;
        }
        }
    } while (choice != 0);
}

void HeThongBaiHat::XuatXepHang()
{
    for (int i = 0; i < List.size(); i++)
        for (int j = i + 1; j < List.size(); j++)
            if (List[i]->XepHang() < List[j]->XepHang())
                swap(List[i], List[j]);
    for (int i = 0;i < List.size();i++)
    {
        cout << "------------------TOP" << i + 1 << "-----------------";
        List[i]->XuatBaiHat();
        cout << "\n==============================================\n" << endl;
    }

}

void HeThongBaiHat::XuatDanhSach()
{
    for (int i = 0;i < List.size();i++)
    {
        List[i]->XuatBaiHat();
        cout << "\n==============================================\n" << endl;
    }

}