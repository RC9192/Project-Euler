#include<bits/stdc++.h>
using namespace std;

long long int evensum(long long int n){
   vector<long long int> v;
   long long int i=1,s=0;
   v.push_back(1);
   v.push_back(2);
   while(v[i]<=n){
       v.push_back(v[i]+v[i-1]);
       if(v[i]%2==0){
           s+=v[i];
       }
       i++;
   }
   return s;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        cout<<evensum(n)<<endl;
    }
    return 0;
}
