#include <bits/stdc++.h>
using namespace std;


int main(){
    long long A, B, W;
    cin >> A >> B >> W;
    W *= 1000;
    long long saisyou = 1e9, saidai = -1e9;
    for(int kazu = 1; kazu <= 2000000; kazu++){
        if(A * kazu <= W && W <= B * kazu){
            if(kazu < saisyou) saisyou = kazu;
            if(kazu > saidai) saidai = kazu;
         }
    }
    if(saisyou == 1e9){
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }
    cout << saisyou << " " << saidai << endl;
    return 0;
}