#include<bits/stdc++.h>
using namespace std;

int findpal(int n){
    int mx=101101;
    for(int i=110;i<=999;i+=11){
        for(int j=101;j<=999;j++){
            if(i*j>=n){
                break;
            }
            ostringstream str1;
            str1<< i*j;
            string num= str1.str();
            string rnum= num;
            reverse(rnum.begin(), rnum.end());
            if(num==rnum){
                if(i*j>mx){
                    mx=i*j;
                }
            }
        }
    }
    return mx;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout<<findpal(n)<<endl;
    }
    return 0;
}
