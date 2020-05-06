#include <iostream>

using namespace std;


int GiaiThua(int n)
{
    if(n==1)
        return 1;
    return n*GiaiThua(n-1);
}

int main()
{
    int n;
    float s;

    cout<<"nhap vao 1 so tu nhien: ";
    do
    {
        cin>>n;
        if(n<=0)
        {
            cout<<"\nmoi nhap lai: ";
            continue;
        }
        break;

    }
    while (true);

    s=float(GiaiThua(n)+1)/GiaiThua(n+1);
    cout<<"ket qua la s= "<<s<<endl;
    return 0;
}
