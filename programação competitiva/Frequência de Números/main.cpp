#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set <ll> Numeros;
    vector <ll> v;
    ll t,x,a;
    cin >> t;
    while(t--){
        cin >> x;
        Numeros.insert(x);
        v.push_back(x);
    }
    for(ll i : Numeros){
        ll qntd = count(v.begin(), v.end(), i);
        cout << i <<" aparece "<< qntd<< " vez(es)" << "\n";
    }


    return 0;
}

