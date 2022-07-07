#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
       long long int n;
        cin >> n;
      long long int sqsum= (n*(n+1)*((2*n)+1))/6;
      long long int sum =pow((n*(n+1))/2,2);
      long long int diff= sum-sqsum;
        cout<<diff<< endl;
    }
    return 0;
}

