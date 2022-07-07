#include<bits/stdc++.h>
using namespace std;

int prod(string s, int k, int n){
    int mm=0;
    for(int i=0;i<=n-k;i++){
        int m=1;
        for(int j=i;j<i+k;j++){
            m*= int(s[j])-48;
        }
        if(m>mm){
            mm=m;
        }
    }
    return mm;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        string num;
        cin >> num;
        cout<<prod(num, k, n)<<endl;
    }
    return 0;
}
