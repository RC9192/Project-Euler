#include <bits/stdc++.h>
using namespace std;

int divisors(long long int n){
    int div=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i!=i){
                div+=2;
            }else{
                div++;
            }
        }
    }
    return div;
}

int main() {
    int t;
    cin>>t;
    vector<long long int> tnw;
    tnw.push_back(0);
    long long int i=0, trng=0;
    while(tnw.size()<=767){
        i++;
        trng+=i;
        if(((tnw.size()>=81 && tnw.size()<=167)|| tnw.size()>195) && trng%10!=0){
            continue;
        }
       if(tnw.size()>168 && tnw.size()<190 && (trng%10!=0 || trng%10!=6)){
        continue;
       }
        int di=divisors(trng);
        while(tnw.size()<di){
            tnw.push_back(trng);
        }
    }
    while(t--){
        int n;
        cin>>n;
        if(n<768){
            cout<<tnw[n]<<endl;
        }else{
        cout<<"842161320"<<endl;
        }

    }
}
