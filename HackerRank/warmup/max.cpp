#include <iostream>
using namespace std;
int main(){

    int N, M, max = 0;
    cin >> N;
    while(N--){
        cin >> M;
        if(M > max) max = M;
    }
    cout << max << endl;

}