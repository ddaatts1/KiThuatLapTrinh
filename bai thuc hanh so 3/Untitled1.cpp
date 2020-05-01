#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

void Bai1();
void Bai2();
void XoaKT(char a[],int x);
int SoTu(char a[]);
int main ()
{
    cout<<"====================== Mang 2 chieu ====================\n ";
    cout<<"nhan 1 de chon bai 1.\n";
    cout<<"nhan 2 de chon bai 2.\n";
    cout<<"nhan 0 de dong.\n";
    int chon;

    do
    {
        cout<<"chon: ";
        cin>>chon;
        if(chon==1)
            Bai1();
        else if(chon==2)
            Bai2();
        else if(chon==0)
            return 0;
            else
            {
                cout<<"moi chon lai: ";
                continue;
            }

    }
    while(true);

}
void Bai1()
{
    int a[100][100];
    int m=4;
    int n=3;//hang

    for (int i=0;i<n;i++)
        for (int y=0;y<m;y++)
    {
        cout<<"a["<<i<<"]["<<y<<"]= ";
        cin>>a[i][y];
    }

   for (int i=0;i<n;i++)
   {
       cout<<"\n";
       for (int y=0;y<m;y++)
        cout<<a[i][y]<<"\t";
   }

   cout<<"\nphan tu lon nhat cau ma tran: ";
   int max=a[0][0];

   for (int i=0;i<n;i++)
        for (int y=0;y<m;y++)
        {
            if(a[i][y]>max)
                max=a[i][y];
        }
        cout<<max<<endl;

        for (int i=0;i<n;i++)
        { cout<<"phan tu lon nhat dong "<<i<<" la: ";
        max=a[i][0];
            for (int y=0;y<m;y++)
            {
                if(a[i][y]>max)
                    max=a[i][y];
            }
            cout<<max<<endl;

        }
}
void Bai2()
{
    char BatKi[]=" Do Tien Dataaha ahihi ";
    int dem=0;

    for (int i=0;i<strlen(BatKi);i++)
    {
        if(islower(BatKi[i]))
            dem++;

    }
    cout<<"so chu cai thuong : "<<dem<<endl;

    for(int i=0;i<strlen(BatKi);)
    {
        if(BatKi[i]=='a')
        {
            XoaKT(BatKi,i);
            continue;
        }
    i++;
    }

    puts(BatKi);

    cout<<"\nchuoi co so tu la: "<<SoTu(BatKi)<<endl;

    for(int i=0;i<strlen(BatKi);i++)
    {
        if(BatKi[i]!=' ')
            if(BatKi[i-1]==' ')
            {
                cout<<"\n";
                cout<<BatKi[i];
            }

        else
            cout<<BatKi[i];

    }
    cout<<endl;

}




void XoaKT(char a[],int x)
{
    for(int i=x;i<strlen(a)-1;i++)
    {
        a[i]=a[i+1];
    }
    a[strlen(a)-1]='\0';
}


int SoTu(char a[])
{
    int dem=0;

if(a[0]!=' ')
    dem=1;
else dem=0;
    for (int i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')

            if(a[i-1]==' ')
            dem++;
    }

    return dem;
}
