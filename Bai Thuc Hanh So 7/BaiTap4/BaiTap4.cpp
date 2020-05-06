#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void Nhaphangcot(int &h,int &c)

{
        cout<<"moi ban nhap so hang va cot: ";

        cin>>h>>c;

        ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap4\\MATRIX.txt");

        f1<<"so hang: "<<h<<endl;
        f1<<"so cot : "<<c<<endl;

        f1.close();
}

void NhapMaTran(int h,int c)
{
    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap4\\MATRIX.txt",ios::app);
    f1<<"hien thi ma tran:";
    int a;

    for(int i=0;i<h;i++)
    { f1<<'\n';
        for(int j=0;j<c;j++)
        {
            cout<<"nhap a["<<i<<"]["<<j<<"]= ";
            cin>>a;
            f1<<a<<'\t';
        }
    }

    f1.close();
}

void MangHaiChieu(int h,int c)
{
    ifstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap4\\MATRIX.txt");

    int **a;
    string b;
    getline(f1,b);
    getline(f1,b);
    getline(f1,b);




    a=new int*[h];
    for(int i=0;i<h;i++)
    {
        a[i]=new int[c];
        for(int j=0;j<c;j++)
        {
            f1>>a[i][j];

        }
    }

  for(int i=0;i<h;i++)
    {
        cout<<endl;
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<'\t';
        }
    }




}
int main ()
{
    int hang ;
    int cot;
    Nhaphangcot(hang,cot);
    NhapMaTran(hang,cot);
    MangHaiChieu(hang,cot);

}
