#include "CHeThongUser.h"

HeThongUser::HeThongUser()
{
    tk = new TaiKhoan;
}
HeThongUser::~HeThongUser() {
    PlayList.clear();
    delete tk;
}
void HeThongUser::Open()
{
    int key;
    do
    {
        system("cls");
        cout << "\t\t============================Menu===================================\n";
        cout << "\t\tNhap 1: Them thong tin danh sach bai nhac tren web\n";
        cout << "\t\tNhap 2: Mo tai khoan su dung ung dung\n";
        cout << "\t\tNhap 0: Thoat. \n" << endl;
        cout << "\t\t===================================================================\n";
        cout << "\t\tNhap lua chon : ";
        cin >> key;
        switch (key)
        {
        case 1:
        {
            int choice;
            do
            {
                system("cls");
                cout << "\t\t============================Menu===================================\n";
                cout << "\t\t1. Nhap danh sach cac bai hat.\n";
                cout << "\t\t2. Xuat danh sach cac bai hat. \n";
                cout << "\t\t3. Xuat bang xep hang cac bai hat pho bien hien nay. \n";
                cout << "\t\t0. Thoat. \n" << endl;
                cout << "\t\t===================================================================\n";
                cout << "\t\tNhap lua chon : ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    NhapDanhSach();
                }
                case 2:
                {
                    XuatDanhSach();
                    system("pause");
                    break;
                }
                case 3:
                {
                    XuatXepHang();
                    system("pause");
                    break;
                }
                case 0:
                {
                    break;
                }
                }
            } while (choice != 0);
        }
        case 2:
        {
            int choice;
            do
            {
                system("cls");
                cout << "\n===============================Menu=====================\n";
                cout << "1. Mo tai khoan vip.\n";
                cout << "2. Mo tai khoan thuong. \n";
                cout << "0. Thoat. \n" << endl;
                cout << "=========================================================\n";
                cout << "Nhap lua chon : ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    tk = new TaiKhoanVip();
                    tk->NhapTK();
                    TKVip();
                    break;
                }
                case 2:
                {
                    tk = new TaiKhoanThuong();
                    tk->NhapTK();
                    TKThuong();
                    break;
                }
                case 0:
                {
                    break;
                }
                }
            } while (choice != 0);
            break;
        }
        case 0:
        {
            break;
        }
        }
    } while (key != 0);
}


void HeThongUser::TKThuong()
{

    int choice;
    do
    {
        long long a = tk->GetTienCuaBan();
        system("cls");
        cout << "\n==============================Tai Khoan Thuong=====================\n";
        cout << "1. Kiem tra tai khoan.\n";
        cout << "2. Them ban nhac yeu thich vao playlist. \n";
        cout << "3. Xoa ban nhac yeu thich vao playlist. \n";
        cout << "4. Goi y ban nhac duoc yeu thich nhat hien nay. \n";
        cout << "5. Xuat het cac ban nhat luu trong playlist. \n";
        cout << "6. Cac bai hat thinh hanh hien nay. \n";
        cout << "7. Nap them tien vao tai khoan cua ban. \n";
        cout << "0. Thoat. \n" << endl;
        cout << "=====================================================================\n";
        cout << "Nhap lua chon : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            tk->XuatTK();

            cout << "\nSo tien co trong tai khoan cua ban: ";
            cout << a;
            cout << endl;
            system("pause");
            break;
        }

        case 2:
        {
            Insert();
            system("pause");
            break;
        }
        case 3:
        {
            Erase();
            system("pause");
            break;
        }
        case 4:
        {
            XuatXepHang();
            system("pause");
            break;
        }
        case 5:
        {
            XuatPlayList();
            system("pause");
            break;
        }

        case 6:
        {
            XuatDanhSach();
            system("pause");
            break;
        }
        case 7:
        {
            float Tien;
            cout << "\nNhap so tien ban muon nap: ";
            cin >> Tien;
            a += Tien;
            cout << "\nNap thanh cong";
            cout << endl;
            system("pause");
            break;
        }
        case 0:
        {

            break;
        }
        }
    } while (choice != 0);
}

void HeThongUser::TKVip()
{
    int Thang = 1;
    long long a = tk->GetTienCuaBan() - 100000;
    int choice;
    do
    {

        system("cls");
        cout << "\n==============================Tai Khoan Vip========================\n";
        cout << "\tGiam 50% gia tien khi nghe cac bai hat ban quyen\n";
        cout << "1. Kiem tra tai khoan.\n";
        cout << "2. Gia han tai khoan. \n";
        cout << "3. Them ban nhac yeu thich vao playlist. \n";
        cout << "4. Xoa ban nhac yeu thich vao playlist. \n";
        cout << "5. Goi y ban nhac duoc yeu thich nhat hien nay. \n";
        cout << "6. Xuat het cac ban nhat luu trong playlist. \n";
        cout << "7. Cac bai hat thinh hanh hien nay. \n";
        cout << "8. Nap them tien vao tai khoan cua ban. \n";
        cout << "0. Thoat. \n" << endl;
        cout << "=====================================================================\n";
        cout << "Nhap lua chon : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            tk->XuatTK();
            cout << "\nThoi gian duy tri tai khoan vip: ";
            cout << Thang;
            cout << "\nSo tien co trong tai khoan cua ban: ";
            cout << a;
            cout << endl;
            system("pause");
            break;
        }
        case 2:
        {
            int n;
            do {
                cout << "\nNhap so thang ban muon duoc gia han them: ";
                cin >> n;
                if (a > n * 100000)
                {
                    a -= n * 100000;
                    Thang += n;
                    cout << "\nGia Han Thanh Cong\n";
                    system("pause");
                    break;
                }
                else
                {
                    cout << "\nSo tien ban can tra de gia han vuoc qua so du tai khoan cua ban! Vui long nap them tien.\n";
                    system("pause");
                    break;
                }
            } while (true);
            break;

        }
        case 3:
        {
            Insert();
            system("pause");
            break;
        }
        case 4:
        {
            Erase();
            system("pause");
            break;
        }
        case 5:
        {
            XuatXepHang();
            system("pause");
            break;
        }
        case 6:
        {
            XuatPlayList();
            system("pause");
            break;
        }

        case 7:
        {
            XuatDanhSach();
            system("pause");
            break;
        }

        case 8:
        {
            float Tien;
            cout << "\nNhap so tien ban muon nap: ";
            cin >> Tien;
            a += Tien;
            cout << "\nNap thanh cong\n";
            system("pause");
            break;
        }
        case 0:
        {

            break;
        }
        }
    } while (choice != 0);
}

void HeThongUser::Insert()
{
    int n;
    cout << "\nThem so thu tu bai hat can them trong danh sach vao playlist: ";
    cin >> n;
    if (n > List.size() || n < 0)
    {
        cout << "\nBai hat ban them khong co trong danh sach!";
    }
    else
    {
        PlayList.push_back(List[n]);
        cout << "\nDa them bai hat vao danh sach";
    }
}

void HeThongUser::Erase()
{
    int n;
    cout << "\nXoa so thu tu bai hat muon xoa trong danh sach playlist: ";
    cin >> n;
    if (n > List.size() || n < 0)
    {
        cout << "\nBai hat da xoa khoi PlayList!";
    }
    else
    {
        PlayList.erase(PlayList.begin() + n);
        cout << "\nDa xoa bai hat vao danh sach";
    }

}

void HeThongUser::XuatPlayList()
{
    for (int i = 0;i < PlayList.size();i++)
    {
        PlayList[i]->XuatBaiHat();
        cout << "\n==============================================\n" << endl;
    }

}