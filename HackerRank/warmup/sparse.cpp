#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n, m, cm;
    map<string, int> sparse;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        sparse[s]++;
    }
    cin >> m;
    cm = m;
    while(m--){
        string s;
        cin >> s;
        cout << sparse[s] << endl;
    }
    return 0;
}