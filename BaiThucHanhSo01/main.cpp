#include <iostream>
#include <math.h>

using namespace std;


void Bai1();
 void Bai2();
 void Bai3();
 void Bai4();
 void Bai5();
 void Bai6();
 int NamNhuan (int n)
 {
    if(n%100==0)
    {
        if (n%400==0)
            return 1;
    }
    else if (n%4==0)
    {
        return 1;
    }
    return 0;


 }



void ChuongTrinh()
{

    int a;





        do
        {
            cout<<"======================= GIAI BAI TAP ======================="<<endl;
    cout<<"Bam phim 1 de chon bai 1\n";
     cout<<"Bam phim 2 de chon bai 2\n";
      cout<<"Bam phim 3 de chon bai 3\n";
       cout<<"Bam phim 4 de chon bai 4\n";
        cout<<"Bam phim 5 de chon bai 5\n";
         cout<<"Bam phim 0 de dung chuong trinh\n";

              cin>>a;
              if (a==0)
              {
                  break;
              }
        switch(a)
        {

            case 1: Bai1();break;
            case 2: Bai2();break;
            case 3: Bai3();break;
            case 4: Bai4();break;
            case 5: Bai5();break;
            case 6: Bai6();break;
            default : cout<<"khong co chuong trinh nao trung khop!!!!\n";
        }
        }while (1);


}
int main ()
{

    ChuongTrinh();
}



void Bai1()
{
    cout<<"\n\tCAC PHEP TINH CO BAN\n";
    int a;
    int b;

    cout<<"moi ban nhap 2 so nguyen:";
    cin>>a>>b;
    cout<<"\na + b = "<<a+b;
    cout<<"\na - b = "<<a-b;
    cout<<"\na * b = "<<a*b;
    cout<<"\na / b = "<<a/b<<endl;

}
void Bai2()
{
    cout<<"\nchan le\n";

int n;
cout<<"moi ban nhap vao mot so nguyen: ";
cin>>n;

if (n%2==0)
{

    cout<<"chan";

}
else cout<<"le"<<endl;

}
void Bai3()
{
    cout<<"\ntinh gia tri bt\n";
    float x;
    cout<<"moi ban nhap mot so thuc: ";
    cin>>x;

    cout<<"\ngia tri f(x)= "<<(pow(x,2)+exp(x)+ pow(sin(x),2))/sqrt(x*x+1)<<endl;  // x radian


}
void Bai4()
{
    cout<<"\ntien khuyen mai\n";

    float a;
    cout<<"\nnhap vao so tien khach tra: ";
    cin>>a;

    if(a>=300000)
    {

        cout<<"\nkhuyen mai 30%\n";

    }
    else if (a>=200000)
    {

        cout<<"\nkhuyen mai 20%\n";
    }
    else
        cout<<"\nkhong dc km\n";


}
/*void Bai5()
{
    float tong=0;
    cout<<"\ntinh thoi gian di\n";
    float a;
    cout<<"\nmoi ban nhap quang duong : ";
    cin>>a;

    if(a>3000)
    {
        tong+=3000;
        a=a-3000;
    }
    else
    {
        tong+=a;
        a=0;
    }
    if(a>2000)
    {
        tong+=2000*2;
        a=a-2000;
    }
    else
    {
        tong+=a*2;
        a=0;
    }
    if(a>1000)
    {
        tong+=1000*3;
        a=a-1000;
    }
    else
    {

        tong+=a*3;
        a=0;
    }
    tong+=a*5;

    cout<<"\nso tg phai di la : "<<tong<<endl;
}*/
// cach khac bai 5
void Bai5()
{
    float tong=0;
    cout<<"\ntinh thoi gian di\n";
    float a;
    cout<<"\nmoi ban nhap quang duong : ";
    cin>>a;

    if(a>6000)
    {
        tong+=10000+(a-6000)*5;
    }
    else if(a>5000)
    {
        tong+=7000+(a-5000)*3;
    }
    else if(a>3000)
    {
        tong+=3000+(a-3000)*2;
    }
    else tong=a;

    cout<<"\ntg phai di la: "<<tong<<endl;
}
void Bai6()
{
    int a;

    cout<<"\nso ngay trong thang\n";
    cout<<"\nmoi ban nhap so ngay trong thang: ";
    cin>>a;

    switch (a)
    {
        case 1:case 3: case 5:case 7:case 8:case 10:case 12: cout<<"\nthang co 31 ngay\n";break;
        case 4:case 6:case 9:case 11: cout<<"\nthang co 30 ngay\n";
        case 2:
            {
                cout<<"\nmoi ban nhap nam: ";
                cin>>a;
                if (NamNhuan(a)==1)
                {
                    cout<<"\nthang co 29 ngay\n";
                }
                else cout<<"\nthang co 28 ngay\n";
            }

    }
}

