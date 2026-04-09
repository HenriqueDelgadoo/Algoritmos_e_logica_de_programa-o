#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ehPrimo(ll n) {
    if (n < 2) return false;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;

        if (ehPrimo(x))
            cout << x << " eh primo\n";
        else
            cout << x << " nao eh primo\n";
    }

    return 0;
}
