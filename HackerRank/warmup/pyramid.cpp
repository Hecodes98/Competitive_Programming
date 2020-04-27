#include <iostream>

using namespace std;

int main(){
    short N;
    cin >> N;
    for(size_t i = 1 ; i <= N ; i++){
        for(size_t j = 1 ; j <= i ; j++){
            cout << "*";
        }
       cout << endl;
    }
    return 0;
}