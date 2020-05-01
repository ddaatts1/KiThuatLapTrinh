#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

void Bai1();
void Bai2();
void phan1(char a[]);
void Phan2(char a[]);
void Phan3(char a[]);
void Phan4(char a[]);
void Phan5(char a[]);
bool KhongQuaMuoiTu(char a[]);
bool DauCach(char a[]);


int main()
{
    cout<<"chon bai 1-2: ";
    int chon;
    do
    {
        cin>>chon;
        if(chon==1)
            Bai1();
        else if(chon==2)
            Bai2();
        else if(chon==0)
            return 0;
        else
        {
            cout<<"moi ban nhap lai: ";
            continue;
        }
    }
    while(true);

    return 0;
}



void Bai1()
{
    int a[100][100];
    int m=2; //hang
    int n=3;
    // nhap ma tran
    cout<<"nhap ma tran: \n";
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }

    cout<<"hien thi ma tran:\n";
    for (int i=0;i<m;i++)
    {
        cout<<"\n";
        for (int j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
    }
    cout<<"\nphan tu nho nhat cua ma tran : ";

    int min=a[0][0];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
    {
        if(a[i][j]<min)
        {
            min=a[i][j];
        }
    }
    cout<<min<<endl;

    int b[n][m];
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
    {
        b[j][i]=a[i][j];
    }
    cout<<"ma tran chuyen vi: \n";
    for (int i=0;i<n;i++)
    {
        cout<<"\n";
        for (int j=0;j<m;j++)
        {
            cout<<b[i][j]<<"\t";
        }
    }
    int c=0;
    cout<<"\nnhan ma tran a*b: \n";
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {
            for(int y=0;y<n;y++)
            {
                c+=a[i][y]*b[y][j];
            }
                cout<<c<<"\t";
                c=0;
        }
        cout<<"\n";
    }
}



void Bai2()
{
    char a[100];

    do
    {
        cout<<"================ CHUONG TRINH XU LY CHUOI KT ====================\n";
    cout<<"1.nhap\n";
    cout<<"2.so chu cai in\n";
    cout<<"3.chen\n";
    cout<<"4.KT chuoi hop le\n";
    cout<<"5.chuoi dao nguoc\n";
    cout<<"0.thoat CT\n";
    int chon;
    do
    {
        cin>>chon;
        if(chon<0||chon>5)
        {
            cout<<"moi ban chon lai: ";
            continue;
        }
        break;
    }while(true);

    switch(chon)
    {
        case 1: phan1(a);break;
        case 2: Phan2(a);break;
        case 3: Phan3(a);break;
        case 4: Phan4(a);break;
        case 5: Phan5(a);
        break;
        case 0: exit(0);
    }
    }while(true);


}



void phan1(char a[])
{
    cout<<"nhap: ";
    fflush(stdin);
    gets(a);
}
void Phan2(char a[])
{
    int dem=0;
    for (int i=0;i<strlen(a);i++)
    {
        if(isupper(a[i]))
            dem++;
    }
    cout<<"\nso chu in hoa: "<<dem<<endl;


}
void Phan3(char a[])
{
    char c;
    int k;

    cout<<"nhap mot ki tu: ";
    cin>>c;
    cout<<"nhap mot vi tri chen: ";
    do
    {
        cin>>k;
        if(k<0||k>=strlen(a))
        {
            cout<<"\nmoi ban nhap lai: ";
            continue;
        }
        break;

    }while(true);
    for (int i=strlen(a);i>k;i--)
    {
        a[i]=a[i-1];

    }

    a[k]=c;

    a[strlen(a)+1]='\0';

    cout<<a<<endl;

}
void Phan4(char a[])
{
    cout<<KhongQuaMuoiTu(a)<<DauCach(a)<<endl;
    if(KhongQuaMuoiTu(a))
    {
        if(DauCach(a))
        cout<<"\nday hop le.\n";
        else  cout<<"\nday khong hop le\n";
    }
    else cout<<"\nday khong hop le\n";



}

bool KhongQuaMuoiTu(char a[])
{
    int dem=0;
    if(a[0]!=' ')
        dem=1;
    else dem=0;
    for (int i=0;i<strlen(a);i++)
    {

        if(isalpha(a[i]))
            if(a[i-1]==' ')
        {
            dem++;
        }
    }
    if(dem<=10)
        return 1;
    return 0;
}
bool DauCach(char a[])
{
    for (int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
            if(a[i+1]==' ')
            return 0;
        return 1;
    }
}
void Phan5(char a[])
{
    char b[100];
    int j=0;

    for(int i=strlen(a)-1;i>=0;i--)
    {
        b[j++]=a[i];
    }
    b[j]='\0';
    cout<<b<<endl;

}

