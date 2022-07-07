#include<bits/stdc++.h>
using namespace std;

long long int maxpr(long long int n){
    long long int prime;
   while(n%2==0){
       prime=2;
       n>>=1;
   }
   for(long long i=3;i<=sqrt(n)+1;i+=2){
       while(n%i==0){
           n/=i;
           prime=i;
       }
   }
   if(n>2){
       prime = n;
   }
   return prime;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        cout<<maxpr(n)<<endl;
    }
    return 0;
}
