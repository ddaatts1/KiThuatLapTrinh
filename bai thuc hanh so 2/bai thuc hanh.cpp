#include <iostream>
#include <math.h>
using namespace std;



void Bai1();
void Bai2();
void Bai3();
void Bai4();
void ChuongTrinh();
int GiaiThua(int a);


void SapXep(float a[],int n)
{
    float temp;
    for (int i=0;i<n;i++)
        for (int y=i+1;y<n;y++)
        {
            if(a[i]>a[y])
            {
                temp=a[i];
                a[i]=a[y];
                a[y]=temp;
            }
        }
        cout<<"\nsap xep tu be den lon:\n";
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }

}
float TienDien(float a)
{
    if (a>100)
    {
        return 100+(a-100)*2;
    }
    return a;
}

int GiaiThua(int a)
{
    if(a==0)
    {

        return 1;
    }

    return a*GiaiThua(a-1);
}

int UCLN (int a,int b)
{
    int r;

    r=a%b;
    if(r==0)
    {
        cout<<"\nUCLN la : "<<b<<endl;
        return 1;
    }
    return UCLN(b,r);
}




void ChuongTrinh()
{

    int a;





        do
        {
            cout<<"======================= GIAI BAI TAP ======================="<<endl;
    cout<<"Bam phim 1 de chon bai 1\n";
     cout<<"Bam phim 2 de chon bai 2\n";
      cout<<"Bam phim 3 de chon bai 3\n";
       cout<<"Bam phim 4 de chon bai 4\n";

         cout<<"Bam phim 0 de dung chuong trinh\n";

              cin>>a;
              if (a==0)
              {
                  break;
              }
        switch(a)
        {

            case 1: Bai1();break;
            case 2: Bai2();break;
            case 3: Bai3();break;
            case 4: Bai4();break;

            default : cout<<"khong co chuong trinh nao trung khop!!!!\n";
        }
        }while (1);


}

int main ()
{
    ChuongTrinh();

}

void Bai1()
{
    int a;
    cout<<"\nmoi ban nhap mot so nguyen: ";
    cin>>a;
    cout<<"\ngia thua cua a la : "<<GiaiThua(a)<<endl;

}
void Bai2()
{
    int n;

    float tong=0;

    cout<<"\nmoi ban nhap mot so nguyen: ";
    cin>>n;

    if(n%2==0)
    {
        for(int i=0;i<=n;i++)
        {
            tong+=1/pow(2,i);
        }
    }
    else
    {
        tong=sqrt(n*n+1);
    }
    cout<<"\ntong la s= "<<tong<<endl;

}
void Bai3()
{
    int a,b;

    cout<<"\nmoi ban nhap 2 so nguyen a,b: ";
    cin>>a>>b;

    UCLN(a,b);



}
void Bai4()
{
    int n;
    int x;
    float a[100];

    do
    {
        cout<<"nhap so ho gia dinh: ";
        cin>>n;
    }
    while(n<=0||n>=100);
    for(int i=0;i<n;i++)
    {
        cout<<"\ngia dinh "<<i<<endl;
        cin>>a[i];
    }
    do
    {
        cout<<"\nnhan phim 1 de hien so tien phai tra cua tung ho\n";
        cout<<"nhan phim 2 de hien thi ho phai tra it nhat\n";
        cout<<"nhan phim 3 sap xep tang dan theo so tien phai tra\n";
        cin>>x;
        switch(x)
        {
            case 1:
                {
                    for(int i=0;i<n;i++)
                    {
                        cout<<"\ngia dinh "<<i<<":"<<TienDien(a[i])<<endl;
                    }
                }
                break;

            case 2:
                {
                    float min;
                    min=a[0];

                    for(int i=1;i<n;i++)
                    {
                        if(min>a[i])
                        {
                            min=a[i];
                        }
                    }
                    for (int i=0;i<n;i++)
                    {
                        if(min==a[i])
                        {
                            cout<<"\nho gia dinh tra it nhat la ho "<<i<<" : "<<TienDien(a[i])<<" dong";
                        }
                    }
                }
                break;
            case 3:
                {

                    SapXep(a,n);
                }

        }
    }`
    while(x!=0);




}
