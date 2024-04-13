#include <bits/stdc++.h>

using namespace std;

int maior_caminho(vector<vector<int>> grafo, vector<bool> visitados, int i, int tamanho_vetor, int resul){ //filho da direita ou filho da esquerda (0 ou 1)
    if(i > (tamanho_vetor+1)/2 - 1){
        return resul;
    }
    visitados[i] = true;
    int x = grafo[i][0];
    int y = grafo[i][1];
    int caminho1 = x;
    int caminho2 = y;
    if(!visitados[x]) caminho1 += maior_caminho(grafo, visitados, x, tamanho_vetor, resul);
    if(!visitados[y]) caminho2 += maior_caminho(grafo, visitados, y, tamanho_vetor, resul);
    if(caminho1 > caminho2) resul += caminho1;
    else resul += caminho2;
    return resul;
}

int main(){
    int n;
    cin >> n;
    int quant = pow(2, n) - 1;
    vector<vector<int>> pontos_g(quant);
    int pontos[quant];
    int k = 1;
    for(int i = 0; i < quant; i++){
        cin >> pontos[i];
    }
    for(int i = 0; i < (pow(2, n)/2 - 1); i++){
        pontos_g[i].push_back(pontos[2*k - 1]);
        pontos_g[i].push_back(pontos[2*k]);
    }
    vector<bool> visi((pow(2, n)/2 - 1));
    int r = 0;
    int resp = maior_caminho(pontos_g, visi, 0, quant, r);
    resp += pontos[0];
    cout << resp << endl;
}
