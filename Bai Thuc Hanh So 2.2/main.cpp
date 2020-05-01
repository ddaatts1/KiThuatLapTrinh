#include <iostream>
#include <math.h>

using namespace std;
#define e 0.00001



void Bai1();
void Bai2();
void Bai3();
void Bai4();
void Bai5();
void Bai6();
void TongCHanLe(int n,int &Chan,int &Le);
int KTSNT(int a);
void TongSNT (int n,int &Tong);
void SoSNT (int n,int &dem);
float GiaiThua(int n);
float Tinh(float x,int n);
int dem(int n);




void ChuongTrinh()
{
    do
    {
        cout<<"\n======================GIAI TOAN======================\n";
    cout<<"nhan phim 1 de giai bai 1\n";
    cout<<"nhan phim 2 de giai bai 2\n";
    cout<<"nhan phim 3 de giai bai 3\n";
    cout<<"nhan phim 4 de giai bai 4\n";
    cout<<"nhan phim 5 de giai bai 5\n";
    cout<<"nhan phim 6 de giai bai 6\n";
    cout<<"nhan phim 0 de thoat \n";
     int chon;
     cin>>chon;
     if(chon==0) break;

     switch(chon)
     {
         case 1: Bai1();break;
         case 2: Bai2();break;
         case 3: Bai3();break;
         case 4: Bai4();break;
         case 5: Bai5();break;
         case 6: Bai6();
     }
    }
    while (1);



}
int main()
{

    ChuongTrinh();

    return 0;
}

void Bai1()
{
    int n;
    int Chan=0;
    int Le=0;

    cout<<"\nTong cac so chan le\n";
    cout<<"moi ban nhap mot so nguyen duong: ";
    do
    {

        cin>>n;
        if(n<=0)
            cout<<"\nmoi ban nhap lai: ";

    }
    while (n<=0);
    TongCHanLe(n,Chan,Le);

    cout<<"\ntong cac so chan la: "<<Chan;
    cout<<"\ntong cac so le la: "<<Le;

}


void Bai2()
{
    int n;
    int Tong=0;
    int dem=0;

    cout<<"\bBai 2";
    cout<<"\nmoi ban nhap mot so nguyen duong:";
    do
    {
        cin>>n;
        if(n<=0)
            cout<<"\nmoi ban nhap lai:";

    }
   while (n<=0);

   TongSNT(n,Tong);
   SoSNT(n,dem);

   cout<<"\ntong SNT trong mang la: "<<Tong;
   cout<<"\nso cac SNT la : "<<dem;




}



void Bai3()
{
    float x;
    double sin1=0;
    double sin2=0;
    int i=0;

    cout<<"\nmoi ban nhap so thuc x: ";
    cin>>x;
    x=x*M_PI/180;


    do
    {
            sin1=sin2;
            sin2+=pow(-1,i)*pow(x,2*i+1)/GiaiThua(2*i+1);
            i++;


    }while(fabs(sin2-sin1)>0.00001);

    cout<<"\nsin("<<x<<")= "<<sin2<<endl;

}



void Bai4()
{
    float x;
    int n;

    cout<<"\nmoi ban nhap 1 so thuc :x= ";cin>>x;
    cout<<"\nmoi ban nhap mot so nguyen duong:n= ";
    do
    {
        cin>>n;
        if(n<=0)
            cout<<"\nmoi nhap lai:n= ";

    }
    while(n<=0);

    cout<<"\nx^y= "<<Tinh(x,n)<<endl;


}



void Bai5()
{
    float x;
    int n;
    cout<<"moi ban nhap 1 so thuc :x= ";cin>>x;
    cout<<"\nmoi ban nhap mot so nguyen duong:n= ";
    do
    {
        cin>>n;
        if(n<=0)
            cout<<"\nmoi ban nhap lai:n= ";
    }
    while(n<=0);
    cout<<"\nf(x,n)= "<<Tinh(x,n)*GiaiThua(n);

}




void Bai6()
{
    int n;
    cout<<"\nmoi ban nhap vao mot so nguyen duong n= ";
    do

    {
        cin>>n;
        if(n<=0)
            cout<<"\nmoi ban nhap lai:n= ";

    }while(n<=0);

    cout<<"\nso chu so cua n la : "<<dem(n)<<endl;

}


void TongCHanLe(int n,int &Chan,int &Le)
{
    for (int i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            Chan+=i;
        }
        else Le+=i;
    }
}



int KTSNT(int a)
{
    if(a==2)
        return 1;

    for (int i=2;i<a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}

void TongSNT(int n,int &Tong)
{
    for(int i=2;i<= n;i++)
    {
        if (KTSNT(i)==1)
            Tong+=i;

    }
}


void SoSNT(int n,int &dem)
{
    for (int i=2;i<=n;i++)
    {
        if( KTSNT(i)==1)
            dem++;
    }
}

float GiaiThua(int n)
{
    if(n==0)
        return 1;

    return n*GiaiThua(n-1);
}


float Tinh(float x,int n)
{
    if(n==0)
        return 1;

    return x*Tinh(x,n-1);
}

int dem(int n)
{
    if (n==0)
        return 0;
    return 1+dem(n/10);
}
