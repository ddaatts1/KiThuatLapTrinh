#include <iostream>
#include<math.h>
using namespace std;

float H(int n,float x)
{
    if (n == 1)
        return 2016*x;
    return pow(x, n) / pow(3, n - 1) + H(n - 1, x);
}
int main()
{
    float x;
    int n;
    float s;

    cin >> n >> x;
    s = H(n, x);

    if (n % 2 == 0)


        cout << "\ngia tri bieu thuc s= " << s;


    else
    {
        s = 0;
        cout << "\ngia tri bieu thuc s= " << s;
    }

}
