#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    vector<int>vec;
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
    int sz=sizeof(prime);
    for(int p=2;p*p<=sz;p++){
        if(prime[p]==true){
            for(int j=p*p;j<=sz;j+=p){
                prime[j]=false;
            }
        }
    }
    int x=2;
    vec.push_back(x);
    for(int p=3;p<=sz;p+=2){
        if(prime[p]){
            vec.push_back(p);
        }
    }
    vec.push_back(sz+2);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int s=0;
        int i=0;
        while(vec[i]<=n){
            s+=vec[i];
            i++;
        }
        cout<<s<<endl;
    }
    return 0;
}
