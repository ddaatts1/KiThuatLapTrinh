#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

void ChuongTrinh();
void Bai_1();
void Bai_2();
void Xoa(char a[100],int x,int n);
int main()
{
    do
    {
        cout<<"================ Bai Thuc Hanh so 3 =================\n";
    cout<<"nhan phim1 de chon bai 1!!\n";
    cout<<"nhan phim 1 de chon bai 2!!\n";
    cout<<"nhan phim 0 de dung chuong trinh!!\n";

    int chon;
    cin>>chon;

    switch (chon)
    {
        case 1: Bai_1();break;
        case 2: Bai_2();break;
        case 0: return 0;
    }
    }
    while (true);


    return 0;
}



void Bai_1()
{
    float MaTran[100][100];
    int m,n;

    cout<<"\nmoi ban nhap so hang va cot cua ma tran: ";
    do
    {
        cin>>m>>n;
        if(m<=0||n<=0)
        {
            cout<<"\nmoi nhap lai: ";
            continue;
        }
        else break;
    }
    while (true);


    for (int i=0;i<m;i++)
        for(int y=0;y<n;y++)
    {
            cout<<"a["<<i<<"]["<<y<<"]= ";
            cin>>MaTran[i][y];
    }
    cout<<"\nhien thi ma tran a: \n";
    for (int i=0;i<m;i++)
    {cout<<"\n";
        for(int y=0;y<n;y++)
    {

            cout<<MaTran[i][y]<<"\t";
    }}
    int max=MaTran[0][0];
    for (int i=0;i<m;i++)
        for (int y=1;y<n;y++)
    {
        if (MaTran[i][y]>max)
        {
            max=MaTran[i][y];
        }
    }
    cout<<"\nso lon nhat la: "<<max<<endl;

    for(int i=0;i<m;i++)
    {
        max=MaTran[i][0];
        for(int y=0;y<n;y++)
        {
            if (MaTran[i][y]>max)
            {
                max=MaTran[i][y];
            }
        }
        cout<<"so lon nhat cua dong "<<i+1<<" la: "<<max<<endl;
    }



}
void Bai_2()
{
    char batki[100];
    int dem=0;
    cout<<"\nnhap vao mot chuoi bat ki: ";
    fflush(stdin);
    gets(batki);
    int n=strlen(batki);
    for(int i=0;i<n;i++)
    {
        if(islower(batki[i]))
            dem++;

    }
    cout<<"\nco tat ca "<<dem<<" chu cai thuong."<<endl;
int b=strlen(batki);
    for (int i=0;i<strlen(batki);i++)
    {
        if(batki[i]=='a')
            Xoa(batki,i,b);
    }

}

void Xoa(char a[100],int x,int n)
{
    for (int i=x;i<n;i++)
    {
        a[i]=a[i+1];


    }
    a[n-2]='\0';
}
