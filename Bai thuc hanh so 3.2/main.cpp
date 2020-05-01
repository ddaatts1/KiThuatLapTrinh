#include <iostream>
#include<stdlib.h>
#include <string.h>
#include<stdio.h>
#define hang 100
#define cot 100
using namespace std;

void Bai1();
void NhapMang(int a[hang][cot],int &m,int &n);
void XuatMang(int a[hang][cot],int m,int n);
void Bai1_4(int a[hang][cot],int m,int n);
void Bai1_5(int a[hang][cot],int m,int n);
void Bai1_6(int a[hang][cot],int m,int n);
void Bai1_7(int a[hang][cot],int m,int n);
void Bai1_8(int a[hang][cot],int m,int n);
bool MTDoiXung(int a[hang][cot],int m,int n);
void Bai2();
bool LaSo(char a)
{
    return a>='0'&&a<='9';
}

bool TimKT(char a[]);
void ChuoiCon();


void Bai3();
void Bai4();
void Bai5();



int main()
{
    do
    {
        cout<<"=================== BAI THUC HANH SO 3.3 ======================\n";
    cout<<"chon bai tu 1-5: ";
    int chon;
    do
    {
        cin>>chon;
        if(chon==0)
            return 0;
        if(chon<0||chon>5)

        {
            cout<<"moi ban nhap lai: ";
            continue;
        }
        break;
    }
    while(true);



    switch (chon)

    {
        case 1: Bai1();break;
        case 2: Bai2();break;
        case 3: Bai3();break;
        case 4: Bai4();break;
        case 5: Bai5();break;
    }



}
while (true);
}

void Bai1()
{
    int a[100][100];
    int m,n;
    do
    {
        cout<<"\n===============XU LY MA TRAN ===================\n";
    cout<<"chon tu bai 1-8: ";
    int chon;

    do
    {
        cin>>chon;
        if(chon==0)
            exit(0);
        if(chon<0||chon>8)
        {
            cout<<"moi ban chon lai: ";
            continue;
        }
        break;
    }
    while(true);

        switch(chon)
        {
            case 1: NhapMang(a,m,n);break;
            case 2:XuatMang(a,m,n);break;

            case 4: Bai1_4(a,m,n);break;
            case 5: Bai1_5(a,m,n);break;
            case 6: Bai1_6(a,m,n);break;
            case 7: Bai1_7(a,m,n);break;
            case 8: Bai1_8(a,m,n);break;
        }



    }while (true);


}

void NhapMang(int a[hang][cot],int &m,int &n)
{
    cout<<"\nnhap so hang ,cot: ";
    cin>>m>>n;
    for (int i=0;i<m;i++)

        for (int j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }


}



void XuatMang(int a[hang][cot],int m,int n)
{


    for (int i=0;i<m;i++)
    {
        cout<<endl;
        for(int y=0;y<n;y++)

        cout<<a[i][y]<<"\t";

    }

}




void Bai1_4(int a[hang][cot],int m,int n)
{
    int tong=0;

    for (int i=0;i<m;i++)
    {
        tong=0;
        for (int j=0;j<n;j++)
        {
            tong+=a[i][j];
        }
        cout<<"tong don "<<i<<" la: "<<tong<<endl;
    }

}
void Bai1_5(int a[hang][cot],int m,int n)
{
    int tong=0;
    for (int i=0;i<n;i++)
    {
        tong =0;
        for (int j=0;j<m;j++)
        {
            tong+=a[j][i];
        }
        cout<<"\ntong cot "<<i<<" la: "<<tong;
    }

}
void Bai1_6(int a[hang][cot],int m,int n)
{
    int x;
    int tong1=0;
    int tong2=0;
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            tong1+=a[i][j];
            tong2+=a[i+1][j];
        }
        if(tong1<tong2)
            x=i;
        else x=i+1;
    }
    cout<<"\ndong co tong nho nhat la dong: "<<x<<endl;
    cout<<"hien thi dongco tong nho nhat:\n";
    for(int i=0;i<n;i++)

    {
        cout<<a[x][i]<<"\t";
    }
}
void Bai1_7(int a[hang][cot],int m,int n)
{
    int b[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
    {
        cout<<"b["<<i<<"]["<<j<<"]= ";
        cin>>b[i][j];
    }
    cout<<"ma tran A+B la: \n";
    for(int i=0;i<m;i++)
    {
        cout<<endl;
        for (int j=0;j<n;j++)
        {
            cout<<a[i][j]+b[i][j]<<"\t";
        }
    }


}
void Bai1_8(int a[hang][cot],int m,int n)
{
    if(MTDoiXung(a,m,n))
        cout<<"day la ma tran doi xung!!\n";
    else cout<<"ma tran khong doi xung!!\n";
}

bool MTDoiXung(int a[hang][cot],int m,int n)
{
    if(m!=n)
        return 0;
    else
    for(int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        {
            if(i!=j)
                if(a[i][j]!=a[j][i])
                    return 0;

        }
        return 1;
}

void Bai2()
{
    char str[100];
    cout<<"nhap chuoi: ";
    fflush(stdin);
    gets(str);
    int dem=0;
    for ( int i=0;i<strlen(str);i++)
    {
        if(LaSo(str[i]))
            dem++;
    }
    cout<<"\nco ki tu la chu so: "<<dem<<endl;
    TimKT(str);




}

bool TimKT(char a[])
{
    char x;
    cout<<"nhap ki tu can tim: ";
    cin>>x;

    for (int i=0;i<strlen(a);i++)
    {
        if(a[i]==x)
        {
            cout<<x<<" co vi tri "<<i<<" trong chuoi.\n";
            return 0;
        }

    }
    cout<<"-1\n";

}

void ChuoiCon()
{
        char b[100];
        char a[100];

        cout<<"nhap chuoi a,b: ";
        fflush(stdin);
        gets(a);
        fflush(stdin);
        gets(b);
        int dem=0;
        int danhdau=0;

        for (int i=0;i<strlen(a);i++)
        {
            if(a[i]==b[0])
            {
                danhdau=i;
                int m=-1;
                for(int j=i;j<strlen(a);j++)
                {
                    if(a[j]==b[++m] && m< strlen(b))
                    {
                        ++dem;
                    }
                    else
                    {

                        break;
                    }
                }
                if(dem==strlen(b))
                {
                    cout<<"\nla chuoi con tai vi tri: "<<danhdau<<endl;
                }
                else
                {
                    danhdau=-1;
                }
                dem=0;
            }
        }

        if(danhdau==-1)
        {
            cout<<"\nkhong phai la chuoi con!!\n";
        }

}


void Bai3()
{
    char a[100];
    ChuoiCon();
}
void Bai4()
{
    char a[100];
    cout<<"\nnhap: ";
    fflush(stdin);
    gets(a);
    int dem=0;
    for (int i=0;i<strlen(a);i++)
    {
        if(a[i]=='(')
            dem++;
        else dem--;

        if(dem<0)
        {
            cout<<"khong hop le!!"<<endl;
             break;
        }

    }
    if(dem==0)
        cout<<"\nhop le!!"<<endl;
}
void Bai5()
{

}
