#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, p;
    cin >> n >> p;
    int tempo_total = 0;
    vector<long long> comp(n);
    for(long long i = 0; i < n; i++){
        cin >> comp[i];
    }
    sort(comp.begin(), comp.end());
    while(p != 0){
        int tempo = 0;
        if(p >= n){
            tempo += comp[n-1];
            for(int i = 0; i < n; i++){
                p -= tempo/comp[i];
            }
            tempo_total += tempo;
        }
        else{
            tempo_total += comp[p-1];
            p = 0;
        }
    }
    cout << tempo_total << endl;
    return 0;
}