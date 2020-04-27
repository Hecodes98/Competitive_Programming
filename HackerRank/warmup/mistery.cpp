#include <iostream>
#include<algorithm> 
#include <vector>
//Solucion a traves de listas de recurrencia o listas de frecuencia
using namespace std;

int main(){

    int n, m, u,v, ans;
    ans = 0;
    cin >> n >> m;

    vector<int> people(n,0);
    while(m--){
        cin >> u >> v;
        people[u]++;
        people[v]++;
    }
    for(size_t i = 0; i < people.size() ; i++){
        ans = max(ans, people[i]);
    }
    cout << ans << endl;

    return 0;
}