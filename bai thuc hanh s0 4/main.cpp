#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdio.h>
#include<string.h>

using namespace std;

void Bai1();
double GiaiThua(int n);
void Bai2();
void HienThi(int n,int KichThuoc[],int TrongLuong[],int GoiHang[]);
void TrongLuongLonNhat(int n,int KichThuoc[],int TrongLuong[],int GoiHang[]);
void TiTrongLonNHat(int n,int KichThuoc[],int TrongLuong[],int GoiHang[]);
void SapXepGiamDan (int n,int KichThuoc[],int TrongLuong[],int GoiHang[]);

void Bai3();
void HienThiChuoi(char a[]);
void ChuanHoa(char a[]);
void XoaKiTu(int x,char a[])
{
    for(int i=x;i<strlen(a);i++)
    {
        a[i]=a[i+1];
    }
    a[strlen(a)]='\0';
}
void Bai4();
void NhapSo(int &n);
void NhapMTVuong(int a[100][100],int n);
void Menu(int a[100][100],int n);
void HienThiMT(int a[100][100],int n);
void TongCacDong(int a[100][100],int n);
void MTDonVi(int a[100][100],int n);
void MTTamGiac(int a[100][100],int n);
bool TamGiacTren(int a[100][100],int n);
bool TamGiacDuoi(int a[100][100],int n);



int main()
{

    cout<<"=============  BAI THUC HANH SO 4  =================\n";
      cout<<"\tnham phim 1 de chon bai 1.\n";
      cout<<"\tnham phim 2 de chon bai 2.\n";
      cout<<"\tnham phim 3 de chon bai 3.\n";
      cout<<"\tnham phim 4 de chon bai 4.\n";
      cout<<"\tnham phim 0 de thoat chuong trinh \n";
    do
    {
      cout<<"chon bai (tu 1-4 ,0 de dong ): ";
      int chon;
      do
      {
          cin>>chon;

          if(chon == 0)
          {
              return 0;
          }
          else if(chon<0 || chon>4)
          {
              cout<<"moi ban nhap lai: ";
              continue;
          }
          else break;

          }while(true);

    switch(chon)
          {
              case 1: Bai1();break;
              case 2: Bai2();break;
              case 3: Bai3();break;
              case 4: Bai4();
          }



}while(true);
}




void Bai1()
{
    cout<<"\n=============== THUC HIEN BAI 1 ==================\n";

    double e=0.00001;
    double x;

    cout<<"moi ban nhap mot so thuc : ";
    cin>>x;
    x=x*M_PI/180;
    int i=0;
    double s=0;
    double s1=0;
    double s2=0;

    do
    {
        s1=s2;


        s +=pow(-1,i)*pow(x,2*i)/GiaiThua(2*i);

        s2=s;

    i++;
    }while(fabs(s2-s1)>=e);
    cout<<"cos("<<x<<")= "<<s2<<endl;


    cout<<"\n-----------------------------------------------------\n";

}

double GiaiThua(int n)
{
    if(n==0)
        return 1;
    return n*GiaiThua(n-1);
}
void Bai2()
{
    cout<<"\n=============== THUC HIEN BAI 2 ==================\n";

    int n;
    int TrongLuong[100];
    int KichThuoc[100];
    int GoiHang[100];
    cout<<"nhap so luong goi hang: ";

    do
    {
        cin>>n;
        if(n>200)
        {
            cout<<"moi nhap lai: ";
            continue;
        }
        break;
    }while(true);

    for(int i=0;i<n;i++)
    {
        cout<<"\tKch thuoc goi hang "<<i<<" la: ";
        cin>>KichThuoc[i];
        cout<<"\tTrong luong goi hang "<<i<<" la: ";
        cin>>TrongLuong[i];
        GoiHang[i]=i;
    }

    int chon;
    do
    {
        cout<<"\n------------------------- CHON 1 CHUC NANG -------------------------\n";
    cout<<"\tnhan 1 de hien ti thong tin tat ca goi hang.\n";
    cout<<"\tnhan 2 de hien thi goi hang lon nhat.\n";
    cout<<"\tnhan 3 de in ra ti trong goi hang lon.\n";
    cout<<"\tnhan 4 de sap xep giam dan.\n";
    cout<<"\tnhan 0 de thoat ve menu.\n";
        cin>>chon;
        if(chon<0 || chon>4)
        {
            cout<<"\nmoi nhap lai: ";
            continue;
        }
        else if(chon==0)
            return ;



    switch(chon)
    {
        case 1: HienThi(n,KichThuoc, TrongLuong,GoiHang);break;
        case 2: TrongLuongLonNhat(n,KichThuoc, TrongLuong,GoiHang);break;
        case 3: TiTrongLonNHat(n,KichThuoc, TrongLuong,GoiHang);break;
        case 4: SapXepGiamDan(n,KichThuoc, TrongLuong,GoiHang);

    }
    }while (true);


    cout<<"\n-----------------------------------------------------\n";

}

void HienThi(int n,int KichThuoc[],int TrongLuong[],int GoiHang[])
{
        cout<<setw(5)<<left<<"Goi";
        cout<<setw(20)<<left<<"Kich Thuoc";
        cout<<setw(20)<<left<<"Trong Luong"<<endl;
        cout<<setfill('-');
        cout<<setw(45)<<"-"<<endl;
        cout<<setfill(' ');

    for(int i=0;i<n;i++)
    {

        cout<<setw(5)<<left<<GoiHang[i];
        cout<<setw(20)<<left<<KichThuoc[i];
        cout<<setw(20)<<left<<TrongLuong[i]<<endl;

    }
}
void TrongLuongLonNhat(int n,int KichThuoc[],int TrongLuong[],int GoiHang[])
{
    cout<<"\n---------------------- TRONG LUONG LON NHAT ----------------------\n";
    int max=TrongLuong[0];
    for(int i=0;i<n;i++)
    {
        if(TrongLuong[i]>max)
        {
            max = TrongLuong[i];
        }
    }
    cout<<setw(5)<<left<<"Goi";
        cout<<setw(20)<<left<<"Kich Thuoc";
        cout<<setw(20)<<left<<"Trong Luong"<<endl;
        cout<<setfill('-');
        cout<<setw(45)<<"-"<<endl;
        cout<<setfill(' ');
    for(int i=0;i<n;i++)
    {
        if(TrongLuong[i]==max)
        {
            cout<<setw(5)<<left<<GoiHang[i];
        cout<<setw(20)<<left<<KichThuoc[i];
        cout<<setw(20)<<left<<TrongLuong[i]<<endl;
        }
}
}
void TiTrongLonNHat(int n,int KichThuoc[],int TrongLuong[],int GoiHang[])
{
    cout<<"\n==================== TI TRONG LON NHAT ====================\n";
    int TiTrong=KichThuoc[0]/TrongLuong[0];

    for(int i=0;i<n;i++)
    {
        if(TiTrong < (KichThuoc[i])/TrongLuong[i])
        {
            TiTrong = (KichThuoc[i])/TrongLuong[i];
        }
    }
    cout<<setw(5)<<left<<"Goi";
        cout<<setw(20)<<left<<"Kich Thuoc";
        cout<<setw(20)<<left<<"Trong Luong"<<endl;
        cout<<setfill('-');
        cout<<setw(45)<<"-"<<endl;
        cout<<setfill(' ');
    for(int i=0;i<n;i++)
    {
        if(TiTrong == (KichThuoc[i])/TrongLuong[i])
        {
            cout<<setw(5)<<left<<GoiHang[i];
        cout<<setw(20)<<left<<KichThuoc[i];
        cout<<setw(20)<<left<<TrongLuong[i]<<endl;
        }

    }

}
void SapXepGiamDan (int n,int KichThuoc[],int TrongLuong[],int GoiHang[])
{
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++)
    {
        if(TrongLuong[i]<TrongLuong[j])
        {
            int temp=TrongLuong[i];
            TrongLuong[i]=TrongLuong[j];
            TrongLuong[j]=temp;

            temp=KichThuoc[i];
            KichThuoc[i]=KichThuoc[j];
            KichThuoc[j]=temp;

            temp=GoiHang[i];
            GoiHang[i]=GoiHang[j];
            GoiHang[j]=temp;


        }
    }

    HienThi(n,KichThuoc, TrongLuong,GoiHang);
}

void Bai3()
{
    cout<<"\n=============== THUC HIEN BAI 3 ==================\n";

    char HoVaTen[100];

    cout<<"\tNhap ho va ten: ";
    fflush(stdin);
    gets(HoVaTen);


        int chon;
    do
    {cout<<"\n-------------------- CHON 1 CHUC NANG -----------------------\n";
    	cout<<"\tnhan 1 de hien thi.\n";
        cout<<"\tnhan 2 de chuan hoa. \n";
        cout<<"\tnhan 0 de tro ve menu chinh.\n";
        cin>>chon;
        if(chon==0)
            return ;
        else if(chon<0 || chon>2)
        {
            cout<<"\nmoi ban nhap lai: ";
            continue;
        }
        if(chon==1)
            HienThiChuoi(HoVaTen);
        if(chon==2)
            ChuanHoa(HoVaTen);

        }while(true);




    cout<<"\n-----------------------------------------------------\n";

}
void HienThiChuoi(char a[])
{
    char str1[100];
    char str2[100];
    char str3[100];
    int dem=1;

     for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            if( !isalpha(a[i-1])|| !isalpha(a[i+1]))
                XoaKiTu(i,a);

    }

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            dem++;
    }

    int j=0;
    int k=0;

    //
    for(int i =1 ;i <= dem;)
    {
        if(i==1)
        {
            j=0;
            while(true)
            {
                if(a[k]!=' ')
            str1[j++]=a[k++];
            else
            {
                str1[j]=='\0';
                i++;
                k++;
                break;

            }
            }

        }
        else if(i==dem)
        {
            j=0;
                while(true)
                {
                    if(a[k]!='\0')
                        str3[j++]=a[k++];
                        else
                        {
                            str3[j]='\0';
                            i++;
                            break;
                        }
                }
        }
        else
        {
            j=0;
            while(true)
            {
                while(true)
            {
                if(a[k]!=' ')
                str2[j++]=a[k++];
                else
                {
                    str2[j]=' ';
                    str2[++j]='\0';
                    k++;
                    i++;
                    break;
                }

            }
            if(i!=dem)
                continue;
            else break;
            }


        }

    }

    cout<<"Ho: "<<str1<<endl;
   cout<<"Ten: "<<str3<<endl;
   cout<<"HO dem: "<<str2<<endl;




}
void ChuanHoa(char a[])
{
    cout<<"\nTen sau khi chuan hoa la: ";
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            if( !isalpha(a[i-1])|| !isalpha(a[i+1]))
                XoaKiTu(i,a);

    }
    if(islower(a[0]))
    {
        a[0]=a[0]-32;
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            if(islower(a[i+1]))
                a[i+1]=a[i+1]-32;

    }

            cout<<a;
}


void Bai4()
{
    cout<<"\n=============== THUC HIEN BAI 4 ==================\n";

    do
    {
        int n;
        int MaTran[100][100];

        cout<<"\tnhan phim 1 de nhap 1 so nguyen duong.\n";
        cout<<"\tnhan phim 2 de nhap MT vuong.\n";
        cout<<"\tnhan phim 3 de mo menu mo rong.\n";
        cout<<"\tnhan 0 de quay lai menu chinh.\n";

        int chon;
        do
        {
            cin>>chon;
            if(chon<0||chon>3)
            {
                cout<<"moi ban nhap lai: ";
                continue;
            }
            break;

        }while(true);

        switch(chon)
        {
            case 1: NhapSo(n);break;
            case 2: NhapMTVuong(MaTran,n);break;
            case 3: Menu(MaTran,n);
            case 0: return;
        }


    }while(true);



    cout<<"\n-----------------------------------------------------\n";

}


void NhapSo(int &n)
{
    cout<<"nhap 1 so ngyen duong: ";
    do
    {
        cin>>n;
        if(n<=0)
        {
            cout<<"moi ban nhap lai: ";
            continue;
        }
        break;
    }while(true);
}
void NhapMTVuong(int a[100][100],int n)
{
    cout<<"Nhap ma tran: "<<endl;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        cout<<"a["<<i<<"]["<<j<<"]= ";
        cin>>a[i][j];
    }
}


void Menu(int a[100][100],int n)
{
    do
    {
        cout<<"\n---------------- CHUONG TRINH XU LY MA TRAN --------------------\n";
        cout<<"nhan 1 de hien thi ma tran.\n";
        cout<<"nhan 2 de hien thi tong cac dong.\n";
        cout<<"nhan 3 de kt ma tran don vi.\n";
        cout<<"nhan 4 de kt ma tran tam giac.\n";
        cout<<"nhan 0 de thoat menu.\n";
        int chon;
        do
        {
            cin>>chon;
            if(chon<0||chon>4)
            {
                cout<<"moi ban nhap lai: ";
                continue;
            }
            break;
        }while(true);

        switch(chon)
        {
            case 1: HienThiMT(a,n);break;
            case 2: TongCacDong(a,n);break;
            case 3: MTDonVi(a,n);break;
            case 4: MTTamGiac(a,n);break;
            case 0: return;
        }
    }while(true);
}
void HienThiMT(int a[100][100],int n)
{
    cout<<"\nHien thi ma tran: \n";

        for(int i=0;i<n;i++)
        {
            cout<<"\n";
            for(int j=0;j<n;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
        }

    }

void TongCacDong(int a[100][100],int n)
{

    for(int i=0;i<n;i++)
        {int temp=0;

            for(int j=0;j<n;j++)
                {
                   temp+=a[i][j];
                }
                cout<<"tong cua dong "<<i<<" la: "<<temp<<endl;
        }
}
void MTDonVi(int a[100][100],int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    if(a[i][j]!=1)
                {
                    cout<<"kjong phai mt don vi.\n";
                    return;
                }
                }

                else if(a[i][j]!=0)
                {
                    cout<<"khong phai mt don vi.\n";
                    return;
                }
            }
        }
        cout<<"la ma tran don vi.\n";
        return;
}
void MTTamGiac(int a[100][100],int n)
{
    if(TamGiacTren(a,n)==1)
        if(TamGiacDuoi(a,n)==1)
            cout<<"==>> ma tran cheo\n";
    else cout<<"==>> ma tran tam giac tren.\n";
    else if(TamGiacDuoi(a,n)==1)
        cout<<"==>> ma tran tam giac duoi.\n";
    else cout<<"==>> khong phai ma tran tam giac.\n";
}

bool TamGiacDuoi(int a[100][100],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i][j]!=0)
            return 0;
    }
    return 1;
}
bool TamGiacTren(int a[100][100],int n)
{
    for (int i=1;i<n;i++)
        for(int j=0;j<i;j++)
    {
        if(a[i][j]!=0)
            return 0;
    }
    return 1;
}

