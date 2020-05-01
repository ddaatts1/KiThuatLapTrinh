#include<iostream>
#include <stdio.h>
#include<string.h>

using namespace std;

bool SoNgoacBangNhau(char a[])
{
    int MoNgoac=0;
    int DongNgoac=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='(')
            MoNgoac++;
        else DongNgoac++;
    }
    if(MoNgoac==DongNgoac)
        return 1;
    return 0;
}
bool NgoacDung(char a[])
{
    int b=0;

    for (int i=0;i<strlen(a);i++)
    {
        if (a[i]=='(') b++;
        else if(b>0)
        {
            b--;
        }
        else return 0;

    }
    return 1;


}
int main ()
{
    char a[100];
    cout<<"nhap: ";


        fflush(stdin);
        gets(a);
        if (SoNgoacBangNhau(a)==1)
        if(NgoacDung(a)==1)
            cout<<"DUng!!!!";
        else
        {
            cout<<"Sai!!!"; return 0;
        }
        else cout<<"Sai!!";





}

/*//bai 6.3
void Chen(char a[],char n,int x)
{
    a[strlen(a)+1]='\0';
    for (int i=strlen(a);i>x;i--)

    {
        a[i]=a[i-1];
    }
    a[x]=n;



}

int main ()
{
    char a[100];
    char c;
    int x;
    cout<<"nhap: ";

    do
    {
        fflush(stdin);
        gets(a);

        if(80)
            break;
        continue;

    }
    while (true);

    cout<<"nhap vi tri can chen: ";
    cin >>x;
    cout<<"nhap tu chen vao: ";
    cin>>c;

    Chen(a,c,x);
   cout<<a;


}*/


