#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int pontos_1 = 0;
    int pontos_2 = 0;
    for(int i = 0; i<n; i++){
        string time_s;
        int time;
        string pontos_s;
        cin >> time_s >> time >> pontos_s;
        pontos_s[0] = '0';
        if(time == 1){
            pontos_1 += stoi(pontos_s);
        }
        if(time == 2){
            pontos_2 += stoi(pontos_s);
        }
    }
    cout << pontos_1 << " x " << pontos_2 << endl;
    return 0;
}