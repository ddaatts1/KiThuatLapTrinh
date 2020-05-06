#include <iostream>

using namespace std;

int main()
{
    int n;
    int i=0;
    cin>>n;
    int dem=1;

    do
    {
        if(dem%2==0)
        {
            i+=dem;
            for(int y=1;y<=dem;y++)
            {

                    cout<<i--<<"\t";
            }
            i+=dem;

        }
        else
        {
            for (int y=1;y<=dem;y++)
            {
                cout<<++i<<"\t";
            }

        }

        cout<<"\n";
        dem++;

    }while(dem<=n);
    return 0;
}
