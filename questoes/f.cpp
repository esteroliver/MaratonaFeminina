#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int medalhas[4] = {1, 2, 4, 8};
    int cont = 0;
    for(int i = 0; i < 4; i++){
        if(n >= 8 && medalhas[3] == 8){
            n -= 8;
            medalhas[3] = 0;
            cont++;
        }
        else if(n >= 4 && medalhas[2] == 4){
            n -= 4;
            medalhas[2] = 0;
            cont++;
        }
        else if(n >= 2 && medalhas[1] == 2){
            n -= 2;
            medalhas[1] = 0;
            cont++;
        }
        else if(n >= 1 && medalhas[0] == 1){
            n -= 1;
            medalhas[0] = 0;
            cont++;
        }

    }
    cout << cont << endl;
    return 0;
}