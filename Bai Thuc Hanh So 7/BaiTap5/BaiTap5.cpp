#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<iomanip>

using namespace std;

struct HangHoa
{
    string MaHang;
    string TenHang;
    int SoLuong;
    int DonGia;
};

void NhapHangHoa(int &n)
{
    HangHoa* a;


    cout<<"nhap so hang hoa: ";
    do
    {
        cin>>n;
        if(n<1 || n>100)
        {
            cout<<"moi nhap lai: ";
            continue;
        }
        break;
    }while(true);

    a=new HangHoa[n];


    for(int i=0;i<n;i++)
    {
        cout<<"nhap du lieu hang hoa "<<i+1<<" : \n";

        cout<<"nhap ma hang: ";
        fflush(stdin);
        getline(cin,a[i].MaHang);
        cout<<"nhap ten hang: ";
        fflush(stdin);
        getline(cin,a[i].TenHang);
        cout<<"nhap so luong: ";
        cin>>a[i].SoLuong;
        cout<<"nhap don gia: ";
        cin>>a[i].DonGia;


        }
 fstream f1 ("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap5\\PRODUCT.BNR",ios::out);
        for(int i=0;i<n;i++)
        {

            f1<<a[i].MaHang<<endl;
            f1<<a[i].TenHang<<endl;
            f1<<a[i].SoLuong<<endl;
            f1<<a[i].DonGia<<endl;
        }

}




void Xuatdl(HangHoa* &a,int n)
{
    a=new HangHoa[n];
    string b;
    ifstream f1;
    f1.open("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap5\\PRODUCT.BNR");



        for(int i=0;i<n;i++)
        {
            getline(f1,a[i].MaHang);
            getline(f1,a[i].TenHang);
            f1>>a[i].SoLuong;
            f1>>a[i].DonGia;
            getline(f1,b);

        }






cout<<"\n==============Thanh Tien=================\n";

cout<<setw(15)<<left<<"Ten Hang";
cout<<setw(25)<<left<<"Thanh Tien"<<endl;
for(int i=0;i<n;i++)
{

cout<<setw(15)<<left<<a[i].TenHang;

cout<<setw(25)<<left<<a[i].SoLuong * a[i].DonGia<<endl;

}




    f1.close();
}

void TongThanhTien(HangHoa * a,int n)
{
    int tong;
    for(int i=0;i<n;i++)
    {
        tong+=a[i].DonGia * a[i].SoLuong;
    }

    cout<<"\nTong thanh tien : "<<tong<<endl;

}

void SapXep(HangHoa *a,int n)
{
    for (int i=0;i<n-1;i++)
        for(int j=i;j<n;j++)
    {
        if(a[i].SoLuong * a[i].DonGia > a[j].SoLuong * a[j].DonGia)
        {
            int temp= a[i].SoLuong;
            a[i].SoLuong = a[j].SoLuong;
            a[j].SoLuong = temp;

            temp = a[i].DonGia;
            a[i].DonGia = a[j].DonGia;
            a[j].DonGia = temp;

            string str;
            str = a[i].TenHang;
            a[i].TenHang = a[j].TenHang;
            a[j].TenHang = str;

            str = a[i].MaHang;
            a[i].MaHang = a[j].MaHang;
            a[j].MaHang = str;



        }
    }

    cout<<setw(10)<<left<<"Ma Hang";
        cout<<setw(20)<<left<<"Ten Hang";
        cout<<setw(10)<<left<<"So Luong";
        cout<<setw(10)<<left<<"Don Gia"<<endl;

    for (int i=0;i<n;i++)
    {
        cout<<setw(10)<<left<<a[i].MaHang;
        cout<<setw(20)<<left<<a[i].TenHang;
        cout<<setw(10)<<left<<a[i].SoLuong;
        cout<<setw(10)<<left<<a[i].DonGia<<endl;

    }

    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap5\\SORTED.BNR");

    for(int i=0;i<n;i++)
    {
        f1<<a[i].MaHang<<endl;
        f1<<a[i].TenHang<<endl;
        f1<<a[i].SoLuong<<endl;
        f1<<a[i].DonGia<<endl;
    }

}



int main ()
{
    HangHoa* a;


    int n;
    NhapHangHoa(n);
    Xuatdl(a,n);
    TongThanhTien(a,n);


    SapXep(a,n);




}
