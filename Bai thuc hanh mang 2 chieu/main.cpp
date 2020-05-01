#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[100];

    cout<<"moi ban nhap : ";cin.getline(a,100);
int b=strlen(a);
    for(int i=0;i<b;i++)
    {
        if(a[i]==' ')
            cout<<"\n";
        else cout<<a[i];
    }

    return 0;
}
