#include<iostream>
#include<fstream>
#include<stdio.h>
#include<iomanip>
#include<string.h>

using namespace std;

void Bai_1();
void NhapSoNguyenDuong(int &n);
void NhapMang(int* &a, int n);
void HienThiMang(int* a,int n);
void DaoNuocVT(int* a,int n);
void SapXepGiamDan(int* a, int n);
void SNT(int* a, int n);
bool LaSNT(int a);

void Bai_2();
struct hocsinh
{
    char HoVaTen[100];
    int NamSinh;
    char GioiTinh[10];
    float DiemTB;
};

void NhapHS(hocsinh* &a,int &n);
void HienThiDSHS(hocsinh* a ,int n);
void DiemTB(hocsinh* a, int n);
void XoaHS(hocsinh* a,int &n);
void XoaHS(hocsinh* a,int x,int &n);



void Bai_3();
void TaoTep();
void DocVB(char str[]);
void NguyenAm(char str[]);
void ChuCaiDau(char str[],char str1[]);
void TachChuoi(char str[],char s1[],char s2[],char s3[]);
void LuuFile(char s1[],char s2[],char s3[]);


int main ()
{
    cout<<"====================== BAI THUC HANH SO 8 =========================\n";

    cout<<"\t1.nhan phim 1 de chon bai 1\n";
    cout<<"\t2.nhan phim 2 de chon bai 2\n";
    cout<<"\t3.nhan phim 3 de chon bai 3\n";
    cout<<"\t0.nhan phim 0 de thoat chuong trinh\n";

    int chon;
    do
    {
        cout<<"--> chon bai (tu 1 - 3): ";
    do
    {

        cin>>chon;
        if(chon<0 || chon>3)
        {
            cout<<"moi ban nhap lai: ";
            continue;
        }
        break;
    }while(true);

    switch(chon)
    {
        case 1: Bai_1();break;
        case 2: Bai_2(); break;
        case 3: Bai_3(); break;
        case 0 : return 0;
    }
    } while (true);


}


void Bai_1()
{
    int n;
    int* Mang;

    cout<<"\n------------------ CHUONG TRINH THUC HIEN BAI 2 ---------------------\n";

    int chon;
    do
    {
    cout<<"\t1.nhan phim 1 de nhap 1 so nguyen duong.\n";
    cout<<"\t2.nhan phim 2 de nhap vao mot day so.\n";
    cout<<"\t3.nhan phim 3 de hien thi day so.\n";
    cout<<"\t4.nhan phim 4 de dao nguoc day.\n";
    cout<<"\t5.nhan phim 4 de sap xep giam dan.\n";
    cout<<"\t6.nhan phim 5 de tim cac so nguyen to.\n";
    cout<<"\t0.nhan phim 0 de tro lai menu chinh.\n";
    cout<<"- chon chuc nang bai 1: ";

        do
        {
            cin>>chon;
            if(chon<0 || chon>6)
            {
                cout<<"- moi ban chon lai: ";
                continue;
            }
            break;


        }while(true);

        switch(chon)
        {
            case 1:  NhapSoNguyenDuong(n); break;
            case 2: NhapMang(Mang,n); break;
            case 3: HienThiMang(Mang, n);break;
            case 4: DaoNuocVT(Mang,n);break;
            case 5: SapXepGiamDan(Mang,  n);break;
            case 6: SNT(Mang,n);break;
            case 0: return;
        }

    }while(true);



}

void NhapSoNguyenDuong(int &n)
{
    cout<<"Nhap mot so nguyen duong lon hon 5: ";
    do
    {
        cin>>n;
        if(n<5)
        {
            cout<<"- moi nhap lai: ";
            continue;
        }
        break;
    }while(true);

}
void NhapMang(int* &a, int n)
{
    a = new int[100];
    cout<<"Nhap Mang: \n";
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];

    }
}
void HienThiMang(int* a,int n)
{
    cout<<"Hien Thi Mang: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
    cout<<endl;
}
void DaoNuocVT(int* a,int n)
{

    for(int i=0, j=n-1;i < j;i++,j--)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    cout<<"Mang sau khi dao chieu la: \n";
    HienThiMang(a,n);

    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai thuc hanh so 8 - on tap\\output1.txt");
    f1<<n<<endl;

    for(int i=0;i<n;i++)
    {
        f1<<a[i]<<'\t';
    }
    f1.close();

    cout<<"\n";

}
void SapXepGiamDan(int* a, int n)
{
    cout<<"-sap xep theo chieu giam dan: \n";

    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;

        }
    }

    HienThiMang(a,n);

    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai thuc hanh so 8 - on tap\\output2.txt");

    f1<<n<<endl;

    for(int i=0;i<n;i++)
    {
        f1<<a[i]<<'\t';
    }
    f1.close();

    cout<<"\n";
}
void SNT(int* a, int n)
{
    int dem=0;
    int b[100];
    int j=0;
    int tong=0;
    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai thuc hanh so 8 - on tap\\output3.txt");
    cout<<"cac so nguyen ro co trong day la: ";
    for(int i=0;i<n;i++)
    {
        if(LaSNT(a[i]))
        {
            cout<<a[i]<<'\t';
            tong+=a[i];
            dem++;
            b[j++]=a[i];
        }
    }

    cout<<"\ntong TBC ca so nguyen to la: "<<float(tong)/dem<<endl;
    f1<<dem<<endl;

    for(int i=0;i<dem;i++)
    {
        f1<<b[i]<<'\t';
    }
    f1<<endl;
    f1<<n<<endl;
    for(int i=0;i<n;i++)
    {
        f1<<a[i]<<'\t';
    }
    f1.close();
    cout<<endl;



}

bool LaSNT(int a)
{
    for(int i=a-1;i>1;i--)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
void Bai_2()
{
    int n=5;
    hocsinh * a;
    NhapHS(a,n);

    cout<<"\n================== THUC HIEN BAI 2 ===============\n";
    int chon;

    do
    {
        cout<<"\t1.nhan phim 1 de hien thi danh sach vua nhap.\n";
        cout<<"\t2.nhn phim 2 de hien thi cac hs cos diwm tb lon hon 6.5.\n";
        cout<<"\t3.xoa hox sinh sinh nam 2000 trong danh sach.\n";
        cout<<"\t0.nhan phim 0 de tro ve menu chinh.\n";


        do
        {   cout<<"chon chuc nang: ";
            cin>>chon;
            if(chon<0 || chon>3)
            {
                cout<<"- moi ban nhap lai: ";
                continue;
            }
            break;

        }while(true);

        switch(chon)
        {
            case 1: HienThiDSHS(a,n);break;
            case 2: DiemTB(a,n);break;
            case 3: XoaHS(a,n);break;
            case 0: return;
        }
    }while(true);
}

void NhapHS(hocsinh* &a,int &n)
{
    cout<<"Nhap thong tin cac hoc sinh: \n";
    a=new hocsinh[n];

    for(int i=0;i<n;i++)
    {
        cout<<"--> Nhap thong tin hoc sinh "<<i+1<<" : \n";
        cout<<"- Nhap ho va ten hoc sinh : ";
        fflush(stdin);
        gets(a[i].HoVaTen);
        cout<<"- Nhap nam sinh: ";
        cin>>a[i].NamSinh;
        cout<<"- Nhap gioi tinh: ";
        fflush(stdin);
        gets(a[i].GioiTinh);
        cout<<"- NHap dien trung binh ca nam: ";
        cin>>a[i].DiemTB;

    }

    cout<<endl;

}
void HienThiDSHS(hocsinh* a ,int n)
{
    cout<<"Hien thi danh sach hoc sinh: \n";
    cout<<setw(30)<<left<<"Ho Va Ten";
    cout<<setw(10)<<left<<"Nam Sinh";
    cout<<setw(16)<<left<<"Gioi Tinh";
    cout<<setw(5)<<left<<"Diem TB"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<setw(30)<<left<<a[i].HoVaTen;
        cout<<setw(10)<<left<<a[i].NamSinh;
        cout<<setw(16)<<left<<a[i].GioiTinh;
        cout<<setw(5)<<left<<a[i].DiemTB<<endl;
    }
}
void DiemTB(hocsinh* a, int n)
{
    cout<<"HIen thi cac hoc sinh cos dien trung binh tren 6.5: \n";
    cout<<setw(30)<<left<<"Ho Va Ten";
    cout<<setw(10)<<left<<"Nam Sinh";
    cout<<setw(16)<<left<<"Gioi Tinh";
    cout<<setw(5)<<left<<"Diem TB"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i].DiemTB>=6.5)
        {
            cout<<setw(30)<<left<<a[i].HoVaTen;
            cout<<setw(10)<<left<<a[i].NamSinh;
            cout<<setw(16)<<left<<a[i].GioiTinh;
            cout<<setw(5)<<left<<a[i].DiemTB<<endl;
        }
    }
    cout<<endl;
}
void XoaHS(hocsinh* a,int &n)
{
    cout<<"- Xoa hoc sinh sinh nam 2000:\n";

    for(int i=0;i<n;)
    {
        if(a[i].NamSinh == 2000)
        {
            XoaHS(a,i,n);
        }
        else i++;
    }

    HienThiDSHS(a,n);

    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai thuc hanh so 8 - on tap\\hocsinh.bnr");
    f1<<setw(30)<<left<<"Ho Va Ten";
    f1<<setw(10)<<left<<"Nam Sinh";
    f1<<setw(16)<<left<<"Gioi Tinh";
    f1<<setw(5)<<left<<"Diem TB"<<endl;
    for(int i=0;i<n;i++)
    {
            f1<<setw(30)<<left<<a[i].HoVaTen;
            f1<<setw(10)<<left<<a[i].NamSinh;
            f1<<setw(16)<<left<<a[i].GioiTinh;
            f1<<setw(5)<<left<<a[i].DiemTB<<endl;
    }

    f1.close();
    cout<<"\n";
    }

void XoaHS(hocsinh* a,int x,int &n)
{


    string temp1;
    for(int i=x;i<n-1;i++)
    {
        a[i].DiemTB=a[i+1].DiemTB;
        strcpy(a[i].GioiTinh,a[i+1].GioiTinh);
        strcpy(a[i].HoVaTen, a[i+1].HoVaTen);
        a[i].NamSinh = a[i+1].NamSinh;
    }

    n--;

}



void Bai_3()
{
    TaoTep();

    char str[100];
    char str1[100];
    char s1[100];
    char s2[100];
    char s3[100];
    cout<<"\n==================== CHUONG TRINH THUC HIEN BAI 3 =====================\n";


    int chon;

    do
    {
        cout<<"\t1.nhan phim 1 de doc input.\n";
        cout<<"\t2.nhan phim 2 de tim cac nguyen am.\n";
        cout<<"\t3.nham phim 3 de tach cac chu cai dau sang chuoi str1.\n";
        cout<<"\t4.nhan phim 4 de tach chuoi str thanh 3 chuoi.\n";
        cout<<"\t5.nhan phim 5 de lu 3 chuoi vao file output.txt.\n";
        cout<<"\t0.nhan phim 0 de tro ve menu chinh.\n";
        do
        {
            cin>>chon;
            if(chon<0 || chon>5)
            {
                cout<<"- moi ban nhap lai: ";
                continue;
            }

            break;
        }while(true);

        switch(chon)
        {
            case 1: DocVB(str);break;
            case 2: NguyenAm(str);break;
            case 3: ChuCaiDau( str,str1);break;
            case 4: TachChuoi(str,s1,s2,s3);break;
            case 5: LuuFile(s1,s2,s3);break;
            case 0: return;
        }
    }while(true);

}
void TaoTep()
{
    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai thuc hanh so 8 - on tap\\INPUT.TXT");

    f1<<"I was born in Viet Nam. I am 20. I went to school in 2005";
}

void DocVB(char str[])
{
     FILE *f1;
    //Mo tep tin de doc du lieu
    f1 = fopen("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai thuc hanh so 8 - on tap\\INPUT.TXT", "r");


    fgets(str, 100, f1);
    cout<<"\n-Chuoi doc duoc: "<<str<<endl;
    fclose(f1);
}
void NguyenAm(char str[])
{
    int dem=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='u' || str[i]=='e'|| str[i]=='o'||str[i]=='a'||str[i]=='i'||str[i]=='U'||str[i]=='E'||str[i]=='O'||str[i]=='A'||str[i]=='I')
        {
            dem++;
        }
    }
    cout<<"\n- co "<<dem<<" nguyen am.\n";


}
void ChuCaiDau(char str[],char str1[])
{
    str1[0]=str[0];
    int j=1;

    for(int i=1;i<strlen(str);i++)
    {
        if(str[i-1]==' '&& isalpha(str[i]))
        {
            str1[j++]=str[i];
        }
    }
    cout<<"\n- Chu cai dau cua str la: ";

    for(int i=0;i<strlen(str1);i++)
    {
        cout<<str1[i]<<' ';
    }

    cout<<endl;
}
void TachChuoi(char str[],char s1[],char s2[],char s3[])
{
    int j=0;
    int dem=1;
   for(int i=0;i<strlen(str)+1;)
   {
       if(str[i]=='.')
       {
           i+=2;
           dem++;
           j=0;
       }


       if(dem==1)
       {
           s1[j++]=str[i];
           i++;
       }
       if(dem==2)
       {
           s2[j++]=str[i];
           i++;
       }
       if(dem==3)
       {
           s3[j++]=str[i];
           i++;
       }
   }


   cout<<endl<<"|"<<s1<<"|"<<endl;
   cout<<endl<<"|"<<s2<<"|"<<endl;
   cout<<endl<<"|"<<s3<<"|"<<endl;
}
void LuuFile(char s1[],char s2[],char s3[])
{
    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai thuc hanh so 8 - on tap\\OUTPUT.TXT");

    f1<<s1<<endl;
    f1<<s2<<endl;
    f1<<s3<<endl;
    f1.close();
}
