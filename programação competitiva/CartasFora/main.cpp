#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector <int> v;
    vector<int> z;
    int x = 0;
    int a = 0;

    while(cin >> x){
            if(x != 0 && x <= 50){
                    for (int c = 1 ; c <= x; c++){
                        v.push_back(c);
                    }
            }else{
                break;
            }



   for(int b : v){
        if(v.size() > 1){

            z.push_back(v[0]); // armazena o valor de b no vetor z, formando assim as cartas descartadas
            int segundo = v[1]; // armazena o segundo numero para colocarmos no final
            v.erase(v.begin()); // apaga o 1 elemento do vetor
            v.erase(v.begin()); // como tinha já apagado o 1, agora o segundo é apagado também
            v.push_back(segundo); // eu armazei o valor do segundo e coloquei ele de volta no final do vetor

        }
    }
    cout << "Discarded cards: ";
for (int i = 0; i < z.size(); i++) {
    cout << z[i];
    if (i != z.size() - 1) {
        cout << ", ";
    }

}
    cout << "\n"<<"Remaining card: ";

    for (int w : v){
        cout <<w << " ";
        cout << "\n";
        v.clear();
    }
    cout << "\n";
    }



    return 0;
}

