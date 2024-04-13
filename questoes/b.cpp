#include <bits/stdc++.h>

using namespace std;

int main(){
    int x[4],y[4];
    for(int i = 0; i < 4; i++){
        cin >> x[i] >> y[i];
    }

    int x1, x2;
    x1 = x[0];
    if(x[1] != x1) x2 = x[1];
    else x2 = x[2];
    
    int y1, y2;
    y1 = y[0];
    if(y[1] != y1) y2 = y[1];
    else y2 = y[2];

    int cx, cy;

    if(x1 > x2){
        if(x2 < 0){
            x2 = x2 * -1;
            cx = x2 + x1;
        }
        else cx = x1 - x2;
    }
    else if(x2 > x1){
        if(x1 < 0){
            x1 = x1 * -1;
            cx = x1 + x2;
        }
        else cx = x2 - x1;
    }

    if(y1 > y2){
        if(y2 < 0){
            y2 = y2 * -1;
            cy = y2 + y1;
        }
        else cy = y1 - y2;
    }
    else if(y2 > y1){
        if(y1 < 0){
            y1 = y1 * -1;
            cy = y1 + y2;
        }
        else cy = y2 - y1;
    }

    cout << cy * cx << endl;
    return 0;
}