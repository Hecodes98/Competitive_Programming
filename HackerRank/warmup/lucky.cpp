#include <iostream>
#include <vector>

using namespace std;

vector<int> lucky;

void generateLucky(int currentLucky = 0){
    if(currentLucky > 1000){
        return;
    }
    int tmp = currentLucky*10 + 4;
    lucky.push_back(tmp);
    generateLucky(tmp);
    tmp = currentLucky*10 + 7;
    lucky.push_back(tmp);
    generateLucky(tmp);
}

int main(){
    int n;
    generateLucky();
    cin >> n;
    for(int luck : lucky){
        if(n % luck == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}