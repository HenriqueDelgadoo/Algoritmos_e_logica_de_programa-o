#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string  x;
    while(cin >> x){
        int count = 0;
        bool  ok = true;

        for (char c : x){
            if(c == '('){
                count ++;
               }else if (c == ')'){

               count --;
               }
               if(count < 0){
                ok = false;
                break;
               }

        }
        if (count !=0) ok =false;
        if (ok) cout << "correct\n";
        else cout << "incorrect\n";

    }

    return 0;
}
