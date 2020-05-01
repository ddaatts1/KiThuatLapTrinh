#include <iostream>

using namespace std;


int DemSoChuSo(int a)
{
    if(a==0)
        return 0;
    return 1+ DemSoChuSo(a/10);
}

int ChuSoBenTrai(int a)
{
    if(a/10==0)
        return a;
    return  ChuSoBenTrai(a/10);
}



int main()
{
    int a;
    cout<<"dem so chu so co trong 1 so nguyen duong: "<<endl;
    cout<<"moi ban nhap mot so nguyen duong: ";

    do
    {
        cin>>a;
        if(a<=0)
            cout<<"moi ban nhap lai!!\n";

    }while(a<=0);

    cout<<"so a co "<<DemSoChuSo(a)<<" chu so\n";

    cout<<"chu so ben trai dau tien la: "<<ChuSoBenTrai(a)<<endl;


    return 0;
}
