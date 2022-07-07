#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        long long int th=(n-1)/3, fiv=(n-1)/5, fif=(n-1)/15;
        cout<<(th*(3+th*3)+fiv*(5+5*fiv)-fif*(15+15*fif))/2<<endl;
    }

    return 0;
}
