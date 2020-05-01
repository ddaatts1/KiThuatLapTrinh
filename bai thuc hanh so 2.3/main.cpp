#include <iostream>

using namespace std;

void CHuongTrinh();
void Bai1();
void Bai2();
void Bai3();
void Bai4();
void Bai5();
void Bai6();
void NhapMang(int a[],int n);
void XuatMang(int a[],int n);
void SapXep(int a[],int n);
void TongBai4 (int a[],int n);
bool LaSNT(int n);
void NhapMangTang(int a[],int &n);
void GopMangTang(int a[],int n,int b[],int m,int c[],int &v);


int main()
{
    CHuongTrinh();

    return 0;
}



void CHuongTrinh()
{
int chon;
    do
    {


    cout<<"================BAI THUC HANH SO 2.3================\n";
    cout<<"1.nhan phim 1 de chon bai 1\n";
    cout<<"2.nhan phim 2 de chon bai 2\n";
    cout<<"3.nhan phim 3 de chon bai 3\n";
    cout<<"4.nhan phim 4 de chon bai 4\n";
    cout<<"5.nhan phim 5 de chon bai 5\n";
    cout<<"6.nhan phim 6 de chon bai 6\n";
    cout<<"nhan phim 0 de thoat chuong trinh\n";



    do
    {
        cin>>chon;
        if(chon<0||chon>6)
            cout<<"moi ban chon lai: ";
    }
    while (chon<0||chon>6);


    switch(chon)
    {
        case 1: Bai1();break;
        case 2: Bai2();break;
        case 3: Bai3();break;
        case 4: Bai4();break;
        case 5: Bai5();break;
        case 6: Bai6();break;

    }
    }
    while (chon!=0);
}


void Bai1()
{

    int n;
    int dem;
    float temp;
    cout<<"dao nguoc day so\n";

    float x[]={12.3,-45.4,12,15,10.1,12.5,44};

    n=sizeof(x)/sizeof(x[1]);
    dem=n-1;

    for (int i=0;i<=dem;i++,dem--)
    {
        temp=x[i];
        x[i]=x[dem];
        x[dem]=temp;


    }
    cout<<"\nday so sau khi bi dao nguoc la :\n";
    for (int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
    }

}


void Bai2()
{
    float x1[100];
    float x2[100];
    int n;
    float TVH=0;


    cout<<"\nmoi ban nhap lan luot 2 vector: ";


    cout<<"\nso phan tu: ";
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cout<<"x1["<<i<<"]= ";
        cin>>x1[i];
        cout<<"x2["<<i<<"]= ";
        cin>>x2[i];
    }

    for (int i=0;i<n;i++)
    {
        TVH+=x1[i]*x2[i];
    }
    cout<<"\ntich vo huong cua 2 vector la : "<<TVH<<endl;


}



void Bai3()
{
    int arr[100];
    int n;
    cout<<"\nmoi ban nhap so phan tu cua mang: ";

    do
    {
        cin>>n;
        if(n<=0)
        {
            cout<<"\nmoi ban nhap lai: ";
        }
    }
    while (n<=0);

    NhapMang(arr,n);

    int demtang=0;
    int demgiam=0;
    int bang=0;
    for (int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            bang++;
            demtang++;
            demgiam++;
        }
        else if(arr[i]<arr[i+1])
            demtang++;
        else demgiam++;
    }

   if(bang==0)
    {
        if(demtang==n-1)
            cout<<"\nday tang ngat\n";
        else if (demgiam==n-1)
            cout<<"day giam ngat\n";
            else
            {
                cout<<"day chua dc sap xep\n";
                SapXep(arr,n);

                XuatMang(arr,n);
                 cout<<"\n";
            }


    }
    else
    {
        if(demtang==n-1)
            cout<<"\nday tang \n";
        else if (demgiam==n-1)
            cout<<"day giam \n";
            else
            {
                cout<<"day chua dc sap xep\n";
                SapXep(arr,n);
                XuatMang(arr,n);
                cout<<"\n";
            }


    }



}


void Bai4()
{
    int arr[100];
    int n;

    cout<<"moi ban nhap so phan tu qua day: ";

    do
    {
        cin>>n;
        if(n<=0)
            cout<<"moi ban nhap lai: ";
    }
    while(n<=0);

    NhapMang(arr,n);
    TongBai4(arr,n);


}

void Bai5()
{
    int arr[100];
    int n;
    int Tong=0;

    cout<<"moi ban nhap vao so phan tu cua day: ";

    do
    {
        cin>>n;
        if(n<=0)
            cout<<"moi ban nhap lai: ";
    }while(n<=0);

    NhapMang(arr,n);

    for (int i=0;i<n;i++)
    {
        if(LaSNT(arr[i])==1)
            Tong+=arr[i];
    }

    cout<<"\ntong cac so nguyen to trong mang la: "<<Tong<<endl;




}



void Bai6()
{
    int a[100];
    int n;
    int b[100];
    int m;
    int c[100];
    int v=0;
    NhapMangTang( a,n);
    NhapMangTang(b,m);

    GopMangTang(a,n,b,m,c,v);
    XuatMang(c,v);
    cout<<"\n";



}


void NhapMang(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}

void XuatMang(int a[],int n)

{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";

    }

}

void SapXep(int a[],int n)
{
    int temp;
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}


void TongBai4 (int a[],int n)
{
    int Le=0;
    int Chan=0;
    int Chia3=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            Chan+=a[i];
        }
        else Le+=a[i];

        if(a[i]%3==0)
            Chia3+=a[i];
    }

    cout<<"tong cac phan tu chia het cho 3 la: "<<Chia3<<endl;
    cout<<"tong cac phan tu chan la: "<<Chan<<endl;
    cout<<"tong cac phan tu le la: "<<Le<<endl;

}

bool LaSNT(int n)
{
    int dem=0;
    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
            dem++;
    }
    if(dem==2)
        return 1;
    return 0;
}


void NhapMangTang(int a[],int &n)
{
    cout<<"moi ban nhap so pha tu cua mang: ";

    do
    {
        cin>>n;
        if(n<=0)
            cout<<"moi ban nhap lai: ";

    }while (n<=0);

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";

        if(i>0)
        {
            do
            {
                cin>>a[i];
                if(a[i]<a[i-1])
                    cout<<"nhap lai de duoc mang mang tang: ";

            }while(a[i]<a[i-1]);
        }
        else cin>>a[i];
    }

}

void GopMangTang(int a[],int n,int b[],int m,int c[],int &v)
{
    int i=0;
    int j=0;

    while (i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            c[v++]=a[i];
            i++;
        }
        else
        {c[v++]=b[j];
        j++;

        }
    }
    while(i<n)

    {
        c[v++]=a[i];
        i++;
    }
    while(j<m)
    {
        c[v++]=b[j];
        j++;
    }

}
