#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin>>n){
        vector<string> v(n);

        for(int i = 0; i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int economia = 0;

        for (int i =0; i < n -1; i++){
            int j = 0;
            while (j<v[i].size() && j < v[i+1].size()&& v[i] [j] == v [i+1] [j]){
                economia ++;
                j++;
            }
        }
        cout << economia << "\n";
    }
    return 0;
}
