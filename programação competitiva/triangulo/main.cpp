#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(1);

    double a,b,c;
    cin>> a >> b >> c;
    if( (a+b)>c && (a+c)>b && (b+c)>a){
        cout << "Perimetro = "<< a+b+c << "\n";
    }else{
        cout << "Area = " << ((a+b)*c) /2.00 << "\n";
    }
    return 0;
}
