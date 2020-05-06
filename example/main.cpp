#include <iostream>

using namespace std;// ma tran xoan oc
#define dong 100
#define cot 100
int main()
{
    int a[dong][cot];
    int i=0;
    int j=0;
    int p=0;
    int k=0;
    int d;
    int c;
    int d1;
    int c1;
    cout<<"moi ban nhap so dong va so cot cua ma tran: ";
    cin>>d;
    cin>>c;
    d1=d;
    c1=c;

    while(k<= (d1*c1-1))
    {
            for (j=p;j<c;j++)
            {cout<<k;
                a[p][j]=k++;

            }

            for(i=p+1;i<d;i++)
            {cout<<k;
                a[i][c-1]=k++;

            }
            if(p!=d-1)
            for(j=c-2;j>=p;j--)
            {cout<<k;
                a[d-1][j]=k++;

            }

            if(p!=c-1)
            for(i=d-2;i>p;i--)
            {cout<<k;
                a[i][p]=k++;

            }
            p++;
            d--;
            c--;


        }

    cout<<"\nma tran xoan oc:\n";

    for (i=0;i<d1;i++)
    {
        cout<<"\n";
        for(j=0;j<c1;j++)
            cout<<a[i][j]<<"\t";
    }


}
