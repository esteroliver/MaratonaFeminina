#include <bits/stdc++.h>

using namespace std;

int main(){
    //input
    int n;
    cin >> n;
    int quant = pow(2, n) - 1;
    int pontos[quant];
    int pontos_amy = 0;
    for(int i = 0; i < quant; i++){
        cin >> pontos[i];
    }
    //calculos
    int k = 1;
    pontos_amy += pontos[0];
    while(k < quant){
        cout << k << endl;
        if(pontos[2*k] - 1 > pontos[2*k]){
            if(((2*k) - 1) >= quant) break;
            pontos_amy += pontos[(2*k) - 1];
            k = (2*k);
        }
        else{
            if(2*k + 1>= quant) break;
            pontos_amy += pontos[2*k];
            k = 2*k + 1;
        }
        
    }
    cout << pontos_amy << endl;
    return 0;
}