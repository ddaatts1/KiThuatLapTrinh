
#include<iostream>
#include<math.h>
#include<fstream>
#include<malloc.h>


using namespace std;

void nha_so_nguyen(int &n)
{
    cout<<"moi ban nhap vao mot so nguyen n=  ";

    cin>>n;
}

void nhap_so_thuc(float &n)
{
    cout<<"moi ban nhap vao mot so thuc x= ";
    cin>>n;
}
float X(float x,int n)
{
    if(n==1)
        return x;
    return x*X(x,n-1);
}

float tinh_p(int n,float x)
{


    return X(x,n)/n;


}




float  tinh_q(int n,float x)
{
    float tong=exp(fabs(x+2));
    cout<<tong<<endl;

    for(int i=1;i<=n;i++)
    {
        tong+=X(x,i)/(2*i+1);
    }

    return tong;
}


void nhap_mang(float* &a,int &na)
{
    cout<<"nhap so phan tu cua mang: ";
    do
    {
        cin>>na;
        if(na<=0)
        {
            cout<<"--> voi ban nhap: ";
            continue;
        }
        break;
    }while(true);

    cout<<"moi ban nhap mang: \n";
    for(int i=0;i<na;i++)
    {
        cout<<"a["<<i+1<<"]= ";
        cin>>a[i];
    }

}

void KT_so_am(float* a,int na)
{
    for(int i=0;i<na;i++)
    {
        if(a[i]>=0)
        {
            cout<<"\n--> mang khong phai toan bo la so am.\n";
            return;
        }
    }
    cout<<"\n--> mang toan bo la so am.\n";
}

void sap_tang_dan(float*a,int na)
{

    for (int i=0;i<na-1;i++)
    {
        for(int j=i;i<na;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}

void luu_mang(float* a,int na, const char* f)
{
    ofstream f1;
    f1.open(f);
    for(int i=0;i<na;i++)
    {
        f1<<a[i]<<"\t";
    }
}


void sao_chep(float*a,int na,float *&b,int &nb)
{
    nb=0;
    b=new float[nb+1];
    for(int i=0;i<na;i++)
    {
        if(a[i]>a[0])
        {
            b[nb]=a[i];
            nb++;
            (float*)realloc(b,(nb+1)*sizeof(float));
        }
    }
}

int main ()
{
    int n;
    float x;

    nhap_so_thuc(x);
    nha_so_nguyen(n);
    cout<<"gia tri cua p: "<<tinh_p(n,x)<<endl;
    cout<<"gia tri cua q: "<<tinh_q(n,x)<<endl;


    cout<<"------------------- Bai2---------------------\n";
    float*a;
    int na;
    float* b;
    int nb;

    nhap_mang(a,na);
    KT_so_am(a,na);
    sap_tang_dan(a,na);
    luu_mang(a,na);
    sao_chep(a,na,b,nb);


}
