#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;
    vector <int> v = {a,b,c};
    sort(v.begin(), v.end());

    for (int x : v){
        cout << x << "\n";
    }

    cout << "\n" << a <<"\n" << b << "\n" << c << "\n";

    return 0;
}
