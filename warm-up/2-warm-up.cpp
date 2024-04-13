#include <bits/stdc++.h>

using namespace std;

int main(){
    string mensagem;
    getline(cin, mensagem);
    int quant = 0;
    for(int i = 0; i < mensagem.size()-1; i += 2){
        if(mensagem[i] == '1') quant++;
    }
    bool par;
    if(mensagem[mensagem.size()-1] == '0') par = true;
    else par = false;
    if(quant%2 == 1 && par) cout << "S" << endl;
    else if(quant%2 == 0 && !par) cout << "S" << endl;
    else cout << "N?" << endl;
    return 0;
}