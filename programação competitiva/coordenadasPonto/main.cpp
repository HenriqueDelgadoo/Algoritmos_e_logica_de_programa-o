#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double x,y;
    string quadrante;
    cin >> x >> y;

    if(x == y && y == 0.0){
        quadrante  = "Origem";
    }else if(x == 0.0){
        quadrante  = "Eixo Y";
    }else if(y == 0.0){
        quadrante = "Eixo X";
    }else if(x< 0.0 && y < 0.0){
        quadrante =  "Q3";
    }else if(x<0.0 && y > 0.0){
        quadrante = "Q2";
    }else if(x > 0.0 && y < 0.0){
        quadrante = "Q4";
    }else{
        quadrante = "Q1";
    }

    cout<< quadrante << "\n";


    return 0;
}
