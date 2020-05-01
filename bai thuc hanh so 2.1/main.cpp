#include <iostream>
#include <math.h>

using namespace std;


void ChuognTrinh();
void Bai1();
void Bai2();
void Bai3();
void Bai4();
void Bai4_1(int &n ,float Toan[],float Van[],float Anh[]);

void Bai4_2(int &n ,float Toan[],float Van[],float Anh[],float TB[]);
void Bai4_3(int &n ,float Toan[],float Van[],float Anh[],float TB[]);
void Bai4_4(float TB[],int n);


void NhapDiem1(int &n ,float Toan[],float Van[],float Anh[] )
{
    cout<<"\nnhap so hoc sinh: ";cin>>n;

    for (int i=0;i<n;i++)
    {
        do
        {
             cout<<"\ndien cua hoc sinh "<<i<<" theo thu tu toan van anh: ";
            cin>>Toan[i]>>Van[i]>>Anh[i];


            if(Toan[i]<=10&&0<=Toan[i]&& Van[i]<=10 && 0<=Van[i] && Anh[i]>=0&& Anh[i]<=10 )
               break;
            else
            {
                cout<<"\nmoi nhap lai: ";
                continue;

            }

        }
        while(1);

    }

}


int Fibonacci(int n)
{
    if(n==2)
        return 1;
    if(n==1)
        return 1;
    if(n>=3)
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
void ChuongTrinh()
{

    int n;


    do
    {
        cout<<"========================CHUONG TRINH GIAI TOAN========================\n";

    cout<<"1.nhan phim 1 de giai bai 1\n";
    cout<<"2.nhan phim 1 de giai bai 2\n";
    cout<<"3.nhan phim 1 de giai bai 3\n";cout<<"4.nhan phim 4 de giai bai 4\n";
    cout<<"5.nhan phim 0 de dung chuong trinh\n";

        cin>>n;
        switch (n)
        {
            case 1: Bai1();break;
            case 2: Bai2();break;
            case 3: Bai3();break;
            case 4: Bai4();break;

        }
    }
    while (n!=0);


}

int main()
{
    ChuongTrinh();


}

void Bai1()
{
    float x;
    int n;
    cout<<"\nmoi banh nhap mot so thuc: ";cin>>x;
    do
    {
        cout<<"\nmoi ban nhap mot so nguyen duong : ";cin>>n;

    }
    while (n<=0);
    float tong=0;
    if (n%2==0)
    {
        for(int i=1;i<=n;i++)
        tong+=pow(x,i)/pow(3,i-1);
    }
    else tong=0;

    cout<<"\ntong= "<<tong;
}
void Bai2()
{
    int n;

    cout<<"moi ban nhap vao so hang can tim cua day fibonacci: ";cin>>n;

    cout<<"\nso hang can tim cua day la : "<<Fibonacci(n)<<endl;


}
void Bai3()
{
    int a;
    float x;
    float x1;

    do
    {
        cout<<"\nmoi ban nhap vao mot so duong: ";cin>>a;

    }
    while (a<=0);


   x1=a;
   x=a;
    for(int i=0;;i++)
    {
        x1=x;
        x=(x1*x1+a)/(2*x1);
        if(fabs((x-x1)/x1)<0.00001)
        {
            cout<<"\ncan bac hai cua so tren la : "<<(x1*x1+a)/(2*x1)<<endl;
            break;
        }


    }



}
void Bai4()
{

    int n;

    float Toan[100];
    float Van[100];
    float Anh[100];
    float TB[100];

    NhapDiem1(n,Toan,Van,Anh);



     int chon;

    do
    {
        cout<<"\n===============TONG KET DIEM CUOI NAM===============\n";
        cout<<"\nbam chon 1 de hien thi diem kt cua tat ca hs va diem TB";
        cout<<"\nbam chon 2 hien thi hs co diem TB ca nhat";
        cout<<"\nbam chon 3 hien thi TBC cua cac mon hoc va TBC cua diem tb cac hs";
        cout<<"\nbam chon 4 de sap xep theo chieu giam dan cua diem trung binh";
        cout<<"\nbam chon 0 de thoat\n";


        cin>>chon;

        switch(chon)
        {
            case 1: Bai4_1(n,Toan,Van,Anh);break;
            case 2: Bai4_2(n,Toan,Van,Anh,TB);break;
            case 3: Bai4_3(n,Toan,Van,Anh,TB);break;
            case 4: Bai4_4(TB,n);
        }
    }
    while(chon !=0);




}
void Bai4_1(int &n ,float Toan[],float Van[],float Anh[])
{

    for (int i=0;i<n;i++)
    {
        cout<<"\nHS "<<i<<" :Toan: "<<Toan[i]<<"\tVan: "<<Van[i]<<"\tAnh: "<<Anh[i]<<"\tDienTB: "<<(Toan[i]+Van[i]+Anh[i])/3<<""<<endl;
    }

}

void Bai4_2(int &n ,float Toan[],float Van[],float Anh[],float TB[])
{
 float Max;

    for(int i=0;i<n;i++)
    {
        TB[i]=(Toan[i]+Van[i]+Anh[i])/3;
    }
    Max=TB[0];
    for (int i=1;i<n;i++)
    {
        if(Max<TB[i])
        {

            Max=TB[i];
        }
    }
    cout<<"\nnhuwng hs co diem tb cao nhat la:\n";
    for (int i=0;i<n;i++)
    {
        if(Max==TB[i])
            cout<<"HS "<<i<<"\n";
    }

}

void Bai4_3(int &n ,float Toan[],float Van[],float Anh[],float TB[])
{
    float TB_Toan;
    float TB_Van;
    float TB_Anh;
    float TB_TB;

    for (int i=0;i<n;i++)
    {
        TB_Toan+=Toan[i];
        TB_Van+=Van[i];
        TB_Anh+=Anh[i];
        TB_TB+=TB[i];
    }
    cout<<"\nTB Toan la: "<<TB_Toan/n;
    cout<<"\nTB Van la: "<<TB_Van/n;
    cout<<"\nTB Anh la: "<<TB_Anh/n;
    cout<<"\nTB Tong la: "<<TB_TB/n;


}

void Bai4_4(float TB[],int n)
{
    float temp;
    for(int i=0;i<n-1;i++)
        for(int y=i+1;y<n;y++)

    {
        if(TB[i]<TB[y])
        {
                temp=TB[i];
                TB[i]=TB[y];
                TB[y]=temp;
        }

    }
    cout<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<<"\t"<<TB[i];
    }

}


