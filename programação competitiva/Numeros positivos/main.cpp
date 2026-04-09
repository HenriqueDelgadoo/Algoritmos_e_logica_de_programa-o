#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double x1,x2,x3,x4,x5,x6;
    cin >>x1>>x2>>x3>>x4>>x5>>x6;
    int a = 0;
    vector<double>v = {x1,x2,x3,x4,x5,x6};

    for(double x : v){
        if(x>0){
            a++;
        }
    }
    cout << a << " valores positivos\n";
    return 0;
}
