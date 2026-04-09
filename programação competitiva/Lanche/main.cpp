#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cod,qntd;
    cin >> cod >> qntd;
    cout << fixed << setprecision(2);

    if (cod == 1){
        cout <<"Total: R$ "<< qntd * 4.0<<"\n";
    }else if(cod == 2){
        cout << "Total: R$ "<< qntd * 4.50 << "\n";
    }else if(cod == 3){
        cout << "Total: R$ " << qntd * 5.0 << "\n";
    }else if (cod == 4){
        cout << "Total: R$ " << qntd * 2.0 << "\n";
    }else{
        cout << "Total: R$ "<< qntd * 1.50 << "\n";
    }


    return 0;
}
