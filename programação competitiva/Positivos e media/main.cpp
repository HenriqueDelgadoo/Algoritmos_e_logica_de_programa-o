#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed <<setprecision(1);
    double x1,x2,x3,x4,x5,x6;

    cin >>x1>>x2>>x3>>x4>>x5>>x6;
    int a = 0;
    double m = 0;
    vector <double> v = {x1,x2,x3,x4,x5,x6};
    for(double x : v){
        if(x>0){
            a++;
            m = m+x;
        }
    }
    cout << a <<" valores positivos\n" << m/a<< "\n";

    return 0;
}
