#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    vector <ll> v;

    int count = 0;
    while (count <= 9){
    cin >> x;
    v.push_back(x);

    for( ll i : v ){
        if (i <= 0) {
        v[count] = 1;
        }
    }
    cout << "X[" << count << "] = " <<  v[count] << "\n";
    count ++;
    }

    return 0;
}
