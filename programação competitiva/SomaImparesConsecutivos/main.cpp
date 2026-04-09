#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    int a = 0;
    cin >>x >>y;
    int inicio = min(x,y) +1;
    int fim = max(x,y);

    for (int i = inicio; i<fim; i++){
        if(i%2 !=0){
            a += i;
        }
    }
    cout << a << "\n";

    return 0;
}
