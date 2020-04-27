#include <bits/stdc++.h>
using namespace std;
vector<int> usedTub(12, 0);
vector<pair<int, int>> tubos;
int n,m, cont = 0;
bool isSolution(int last, bool power, int cont){   
    bool currentPower = power;
    if (cont == n){
        return true;
    }
    if(last == -1){
        for(int i = 0 ; i < tubos.size(); i++){
            usedTub[i] = 1;
            if (isSolution(i, true, cont+=1))return true;
            cont-=1;
            usedTub[i] = 0; 
        }
    }
    for (int i = 0; i < tubos.size(); i++){   
        if (!usedTub[i]){
            if(tubos[i].first == tubos[last].second){
                usedTub[i] = 1;         
                if (isSolution(i, currentPower, cont+=1))return true;
                cont-=1;
                usedTub[i] = 0;    
            }else if(power){
                usedTub[i] = 1;  
                if (isSolution(i, false, cont+=1))return true;
                cont-=1;
                usedTub[i] = 0;
            }
        }
    }
    return false;
}
int main(){
    short a, b;
    while(cin >> n){    
        m = n;
        while (m--){
            cin >> a >> b;
            tubos.push_back(make_pair(a, b));
        }
        if(isSolution(-1 ,true, 0)){
            cout << "si" << endl;
        }else{
            cout << "no" << endl;
        }
        tubos.clear();
        fill(usedTub.begin(), usedTub.end(),0);
    }
}