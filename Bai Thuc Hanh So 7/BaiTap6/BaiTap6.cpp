#include<iostream>
#include<fstream>

using namespace std;

void Nhap(int a[],int &n)
{
    cout<<"nhap so phan tu cua mang: ";

    do
    {
        cin>>n;
        if(n<=0)
        {
            cout<<"moi nhap lai: ";
            continue;
        }

        break;
    } while(true);

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}

void TapTin(int a[],int n)
{
    fstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap6\\DATHUC.txt",ios::out);

    f1<<n<<endl;

    for(int i=0;i<n;i++)
    {
        f1<<a[i]<<' ';
    }
    f1<<endl;
    f1<<a[0]<<'X'<<0;
    for(int i=1;i<n;i++)
    {
         f1<<" + "<<a[i]<<'X'<<i;

    }


}

int main ()
{
    int a[100];
    int n;

    Nhap(a,n);
    TapTin(a,n);


}
