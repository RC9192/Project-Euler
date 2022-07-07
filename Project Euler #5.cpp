#include<bits/stdc++.h>
using namespace std;

long long int mxpro(int n){
    bool prime[n+1];
        memset(prime, true, sizeof(prime));
        for (int p = 2; p * p <= n; p++){
        if (prime[p] == true){
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int two = log(n)/log(2), three= log(n)/log(3), five= log(n)/log(5);
    long long int r= pow(2,two)*pow(3,three)*pow(5,five);
    for(int p=7; p<=n;p++){
        if(prime[p]==true){
            r*=p;
        }
    }
    return r;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<mxpro(n)<<endl;
    }
    return 0;
}
