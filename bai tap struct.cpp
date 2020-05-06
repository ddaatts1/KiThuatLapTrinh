#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<malloc.h>
#include<string.h>

using namespace std;

struct Date
{
    int ngay;
    int thang;
    int nam;
};
struct NhanVien
{
    char manv[30];
    char hodem[30],ten[10];
    Date ngaysinh;
    char gioitinh[8];
    char noisinh[100];
    char dienthoai[15];
    double luong;
};
typedef NhanVien* DanhSach;

void NhapDate(Date &a)
{
    cout<<"\t\tNhap ngay: ";cin>>a.ngay;
    cout<<"\t\tNhap thang: ";cin>>a.thang;
    cout<<"\t\tNhap nam: ";cin>>a.nam;

}

void HienThiDate(Date a)
{
    cout<<setw(2)<<setfill('0')<<right<<a.ngay<<"/";
    cout<<setw(2)<<setfill('0')<<right<<a.thang<<"/";
    cout<<setw(4)<<setfill(' ')<<right<<a.nam<<" ";
}

void NhapNv(NhanVien &a)
{
    cout<<"\tnhap ma nv: ";
    fflush(stdin);
    gets(a.manv);
    cout<<"\tnhap ho dem: ";
    fflush(stdin);
    gets(a.hodem);
    cout<<"\tnhap ten ";
    fflush(stdin);
    gets(a.ten);
    cout<<"\tnhap ngay sinh\n";
    NhapDate(a.ngaysinh);
    cout<<"\tnhap gioi tinh: ";
    fflush(stdin);
    gets(a.gioitinh);
    cout<<"\tnhap dt: ";
    fflush(stdin);
    gets(a.dienthoai);
    cout<<"\tnhap luong: ";
    cin>>a.luong;

}

void HienThiTieuDe()
{
    cout<<setw(10)<<left<<"Ma NV";
    cout<<setw(14)<<left<<"Ho Dem";
    cout<<setw(8)<<left<<"ten";
    cout<<setw(11)<<left<<"NgaySinh";
    cout<<setw(10)<<left<<"Gioi Tinh";
    cout<<setw(11)<<left<<"Dien Thoai";
    cout<<setw(12)<<left<<"Luong Thnag";

}


void HienThiNV(NhanVien a)
{
    cout<<"\n";
    cout<<setw(10)<<left<<a.manv;
    cout<<setw(14)<<left<<a.hodem;
    cout<<setw(8)<<left<<a.ten;
    HienThiDate(a.ngaysinh);
    cout<<setw(10)<<left<<a.gioitinh;
    cout<<setw(11)<<left<<a.dienthoai;
    cout<<setw(12)<<left<<a.luong;

}

void NhapDanhSach(DanhSach &ds,int &n)
{
    cout<<"Nhap so luong nv : ";cin>>n;
    cout<<"nhap danh sach: "<<n<<" nhan viwn"<<endl;

    ds=new NhanVien[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Nhan thong tin nv vien thu "<<i+1<<endl;
    NhapNv(ds[i]);
    }

}

void HienThiDSNV(DanhSach ds,int n)
{
    HienThiTieuDe();
    for(int i=0;i<n;i++)
    {
        HienThiNV(ds[i]);
    }
}

void MinAge(DanhSach ds,int n)
{
    int max=ds[0].ngaysinh.nam;
    for(int i=0;i<n;i++)
    {
        if(max<ds[i].ngaysinh.nam)
        max=ds[i].ngaysinh.nam;

    }
    cout<<"\n";

    for(int i=0;i<n;i++)
    {
        if(ds[i].ngaysinh.nam == max)
        {
            cout<<setw(14)<<left<<ds[i].hodem;
            cout<<setw(8)<<left<<ds[i].ten;
            cout<<setw(4)<<left<<2020-ds[i].ngaysinh.nam+1;
            cout<<setw(7)<<left<<ds[i].gioitinh<<endl;
        }
    }
}

void ChenNV(DanhSach &ds,int &n)
{
    if(n<3)
    {
        cout<<"Danh sach khoong co vi tri thu 3 de chen!!";
        return;
    }

    cout<<"Nhap thong tin nv can chen\n";
    NhanVien new_nv;
    NhapNv(new_nv);
    ds=(DanhSach)realloc(ds,(n+1)*sizeof(NhanVien));
    for(int i=n-1;i>=2;i--)

    ds[i+1]=ds[i];
    ds[2]=new_nv;
    n++;
}

void SapXepTheoTen(DanhSach ds,int n)
{
    for (int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)

    {
        if(strcmp(ds[i].ten,ds[j].ten)>0)
        {
            NhanVien temp=ds[i];
            ds[i]=ds[j];
            ds[j]=temp;
        }
    }
}
int main()
{
    DanhSach ds;
    int n;
    NhapDanhSach(ds,n);
    HienThiDSNV(ds,n);
    MinAge(ds,n);

    ChenNV(ds,n);
    HienThiDSNV(ds,n);

}
