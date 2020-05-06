#include<iostream>
#include<fstream>

using namespace std;

void HienThi(int &n,float *a)
{
    ifstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap3\\input.txt");



    f1>>n;
    int i=0;
 cout<<n<<endl;
    while(!f1.eof())
    {
        f1>>a[i++];
    }



    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<' ';
    }

    f1.close();
}


void Chen(int n,float* a)
{
    int k;
    cout<<"\nnhap so nguyen K: ";
    do
    {
        cin>>k;
        if(k<1 || k>n)
        {
            cout<<"moi nhap lai: ";
            continue;
        }
        break;
    }while(true);
    float x;
    cout<<"nhap so thuc x: ";
    cin>>x;


    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap3\\output.txt");

    f1<<"k = "<<k<<'\n';
    f1<<"n = "<<n<<'\n';
    f1<<"Day sau khi chen:\n";
    int j=0;;
    for(int i=0;i<=n;i++)
    {
        if(k==i+1)
            f1<<x<<' ';
        else
        {
            f1<<a[j++]<<' ';
        }
    }





    f1.close();
}
void Xoa(int &n,float *a,int x)
{

    for(int i=x;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void Bai3_Xoa(int &n,float *a)
{
    ofstream f1("C:\\Users\\tien dat\\Desktop\\Ki Thuat May Tinh codeblock\\Bai Thuc Hanh So 7\\BaiTap3\\output2.txt");

    f1<<"n ban dau: "<<n<<'\n';
    f1<<"cac vi tri da xoa: ";
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            f1<<i+1<<' ';
            Xoa(n,a,i);
        }

    }
    f1<<'\n';
    f1<<"n sau khi xoa cac phan tu am: "<<n<<'\n';
    f1<<"mang sau khi xoa:\n";


    for(int i=0;i<n;i++)
    {
        f1<<a[i]<<' ';
    }
}


int main ()
{
    int n;
    float *a;
    a=new float[10];
    HienThi(n,a);
    Chen(n,a);

    Bai3_Xoa(n,a);




}
