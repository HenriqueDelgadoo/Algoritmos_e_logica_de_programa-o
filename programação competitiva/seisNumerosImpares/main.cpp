#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    int a = 0;
    cin >>x;

    for(x;a<6;x++){
        if(x%2 != 0){
            cout << x << "\n";
            a++;
        }
    }


    return 0;
}
