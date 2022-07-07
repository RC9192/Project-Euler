#include<bits/stdc++.h>
using namespace std;

int primen(int n){
    bool prime[105000];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= 105000; p++){
        if (prime[p] == true){
            for (int i = p * p; i <= 105000; i += p){
                prime[i] = false;
            }
        }
    }
    int s=0;
    for(int p=2;p<=105000;p++){
        if(prime[p]){
            s++;
        }
        if(s==n){
            s=p;
            break;
        }
    }
    return s;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<primen(n)<<endl;
    }
    return 0;
}
