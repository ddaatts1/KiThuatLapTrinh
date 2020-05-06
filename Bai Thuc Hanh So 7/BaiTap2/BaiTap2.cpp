#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;



void ghi_dl()
{
    fstream f1;
    fstream f2;
    int n;
    int a[100];

    f1.open("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap2\\FILE1.txt", ios::out);
    cout<<"nhap du lieu cua FILE1.txt (nhan 0 de hoan thanh!)\n";
    for (int j=1;;j++)
    {
        cout<<"nhap so phan tu cua day "<<j<<" : ";
        cin>>n;
        if(n==0)
            break;
        cout<<"nhap cac phan tu cach nhau boi dau cach: ";
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        for(int i=0;i<n;i++)
        {
            f1<<a[i]<<' ';

        }
        f1<<'\n';
    }


    f1.close();

    f2.open("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap2\\FILE2.txt",ios::out);
    cout<<"nhap du lieu cua FILE2.txt (nhan 0 de hoan thanh!)\n";
    for (int j=1;;j++)
    {
        cout<<"nhap so phan tu cua day "<<j<<" : ";
        cin>>n;
        if(n==0)
            break;
        cout<<"nhap cac phan tu cach nhau boi dau cach: ";
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        for(int i=0;i<n;i++)
        {
            f2<<a[i]<<' ';

        }
        f2<<'\n';
    }
    f2.close();
}

void chep_dl(char a)
{
    fstream f3("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap2\\FILE3.txt",ios::app);

    if(a=='\n')
        f3<<a;
    else
    f3<<a<<" ";

}

void ghep_dl()
{
    int a;


    FILE* f1=fopen("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap2\\FILE1.txt","r");
    a=fgetc(f1);
    while(!feof(f1))
    {

        chep_dl(a);
        a=fgetc(f1);

    }
    fclose(f1);

    FILE* f2=fopen("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap2\\FILE2.txt","r");
    a=fgetc(f2);
    while(!feof(f2))
    {

        chep_dl(a);
        a=fgetc(f2);
    }
    fclose(f2);



}

int main()
{
   ghi_dl();
    //doc_dl();
    ghep_dl();
}
